inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 16, 4 }));
  set_short( "Passage - x24y16z4" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y16z4.c",
  "east" : DIR+"/rooms/x25y16z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
