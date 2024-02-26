inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 3 }));
  set_short( "Passage - x40y28z3" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z3.c",
  "east" : DIR+"/rooms/x41y28z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
