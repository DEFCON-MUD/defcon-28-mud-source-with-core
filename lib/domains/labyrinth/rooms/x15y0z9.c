inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 9 }));
  set_short( "Passage - x15y0z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z9.c",
  "east" : DIR+"/rooms/x16y0z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
