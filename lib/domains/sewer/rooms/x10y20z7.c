inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 7 }));
  set_short( "Passage - x10y20z7" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z7.c",
  "east" : DIR+"/rooms/x11y20z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
