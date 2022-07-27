inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 39, 3 }));
  set_short( "Hallway - x21y39z3" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y40z3.c",
  "south" : DIR+"/rooms/x21y38z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
