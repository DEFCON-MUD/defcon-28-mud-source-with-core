inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 9 }));
  set_short( "Corridor - x1y0z9" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
