inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 6, 3 }));
  set_short( "Hallway - x34y6z3" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y6z3.c",
  "east" : DIR+"/rooms/x35y6z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
