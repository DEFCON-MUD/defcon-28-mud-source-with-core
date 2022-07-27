inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 3 }));
  set_short( "Hallway - x3y36z3" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z3.c",
  "east" : DIR+"/rooms/x4y36z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
