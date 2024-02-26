inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 5 }));
  set_short( "Corridor - x1y10z5" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z5.c",
  "south" : DIR+"/rooms/x1y9z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
