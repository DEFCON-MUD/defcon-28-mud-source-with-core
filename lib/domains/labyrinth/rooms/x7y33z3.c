inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 33, 3 }));
  set_short( "Hallway - x7y33z3" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y34z3.c",
  "south" : DIR+"/rooms/x7y32z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
