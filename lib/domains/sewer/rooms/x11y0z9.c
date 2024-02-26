inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 0, 9 }));
  set_short( "Hallway - x11y0z9" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y0z9.c",
  "east" : DIR+"/rooms/x12y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
