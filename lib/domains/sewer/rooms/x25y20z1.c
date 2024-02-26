inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 1 }));
  set_short( "Hallway - x25y20z1" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z1.c",
  "north" : DIR+"/rooms/x25y21z1.c",
  "south" : DIR+"/rooms/x25y19z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
