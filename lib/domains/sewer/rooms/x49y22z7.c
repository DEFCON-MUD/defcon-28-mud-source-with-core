inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 7 }));
  set_short( "Hallway - x49y22z7" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z7.c",
  "north" : DIR+"/rooms/x49y23z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
