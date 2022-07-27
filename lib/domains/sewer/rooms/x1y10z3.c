inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 3 }));
  set_short( "Hallway - x1y10z3" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z3.c",
  "south" : DIR+"/rooms/x1y9z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
