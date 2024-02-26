inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 3, 3 }));
  set_short( "Passage - x11y3z3" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y4z3.c",
  "south" : DIR+"/rooms/x11y2z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
