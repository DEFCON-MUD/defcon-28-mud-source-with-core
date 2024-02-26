inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 3 }));
  set_short( "Passage - x13y38z3" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y39z3.c",
  "south" : DIR+"/rooms/x13y37z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
