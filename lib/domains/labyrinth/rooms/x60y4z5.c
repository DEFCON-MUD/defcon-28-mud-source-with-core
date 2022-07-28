inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 4, 5 }));
  set_short( "Passage - x60y4z5" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y4z5.c",
  "east" : DIR+"/rooms/x61y4z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
