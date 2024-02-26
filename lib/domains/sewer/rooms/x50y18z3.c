inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 18, 3 }));
  set_short( "Corridor - x50y18z3" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y18z3.c",
  "east" : DIR+"/rooms/x51y18z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
