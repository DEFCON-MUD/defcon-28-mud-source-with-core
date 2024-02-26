inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 30, 0 }));
  set_short( "Passage - x28y30z0" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y30z0.c",
  "east" : DIR+"/rooms/x29y30z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
