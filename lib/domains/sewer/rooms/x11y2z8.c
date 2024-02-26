inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 8 }));
  set_short( "Passage - x11y2z8" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y2z8.c",
  "east" : DIR+"/rooms/x12y2z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
