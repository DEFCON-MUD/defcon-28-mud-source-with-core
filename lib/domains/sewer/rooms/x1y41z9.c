inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 41, 9 }));
  set_short( "Hallway - x1y41z9" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y42z9.c",
  "south" : DIR+"/rooms/x1y40z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
