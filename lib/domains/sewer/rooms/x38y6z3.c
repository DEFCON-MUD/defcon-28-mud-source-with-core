inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 6, 3 }));
  set_short( "Passage - x38y6z3" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y6z3.c",
  "east" : DIR+"/rooms/x39y6z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
