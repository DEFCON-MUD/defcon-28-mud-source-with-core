inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 40, 7 }));
  set_short( "Hallway - x38y40z7" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y40z7.c",
  "east" : DIR+"/rooms/x39y40z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
