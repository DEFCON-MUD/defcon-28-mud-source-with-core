inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 3 }));
  set_short( "Passage - x45y22z3" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y22z3.c",
  "east" : DIR+"/rooms/x46y22z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
