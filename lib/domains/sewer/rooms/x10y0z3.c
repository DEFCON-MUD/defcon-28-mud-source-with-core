inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 3 }));
  set_short( "Passage - x10y0z3" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z3.c",
  "east" : DIR+"/rooms/x11y0z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
