inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 3 }));
  set_short( "Passage - x41y12z3" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y12z3.c",
  "east" : DIR+"/rooms/x42y12z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
