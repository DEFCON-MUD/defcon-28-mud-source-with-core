inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 18, 9 }));
  set_short( "Passage - x36y18z9" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y18z9.c",
  "east" : DIR+"/rooms/x37y18z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
