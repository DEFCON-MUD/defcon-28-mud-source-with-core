inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 5 }));
  set_short( "Hallway - x2y42z5" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z5.c",
  "east" : DIR+"/rooms/x3y42z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
