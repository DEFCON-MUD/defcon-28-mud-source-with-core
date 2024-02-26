inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 9 }));
  set_short( "Hallway - x2y64z9" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
