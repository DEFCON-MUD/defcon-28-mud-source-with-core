inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 2, 8 }));
  set_short( "Passage - x2y2z8" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y2z8.c",
  "east" : DIR+"/rooms/x3y2z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
