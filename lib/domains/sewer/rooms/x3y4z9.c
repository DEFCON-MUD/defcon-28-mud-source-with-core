inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 9 }));
  set_short( "Passage - x3y4z9" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y4z9.c",
  "north" : DIR+"/rooms/x3y5z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
