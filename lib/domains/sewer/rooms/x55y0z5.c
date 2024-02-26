inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 0, 5 }));
  set_short( "Corridor - x55y0z5" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y0z5.c",
  "east" : DIR+"/rooms/x56y0z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
