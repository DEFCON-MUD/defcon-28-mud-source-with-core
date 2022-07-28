inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 3 }));
  set_short( "Hallway - x53y54z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y54z3.c",
  "north" : DIR+"/rooms/x53y55z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
