inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 0 }));
  set_short( "Passage - x56y0z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z0.c",
  "east" : DIR+"/rooms/x57y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
