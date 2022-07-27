inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 3 }));
  set_short( "Hallway - x43y6z3" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y7z3.c",
  "south" : DIR+"/rooms/x43y5z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
