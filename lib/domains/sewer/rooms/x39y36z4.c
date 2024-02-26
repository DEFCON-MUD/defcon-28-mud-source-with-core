inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 4 }));
  set_short( "Hallway - x39y36z4" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y36z4.c",
  "south" : DIR+"/rooms/x39y35z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
