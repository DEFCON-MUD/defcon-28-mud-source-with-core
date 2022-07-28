inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 5 }));
  set_short( "Passage - x41y36z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y36z5.c",
  "east" : DIR+"/rooms/x42y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
