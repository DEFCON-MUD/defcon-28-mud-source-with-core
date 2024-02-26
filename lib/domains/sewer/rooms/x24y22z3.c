inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 3 }));
  set_short( "Hallway - x24y22z3" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z3.c",
  "east" : DIR+"/rooms/x25y22z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
