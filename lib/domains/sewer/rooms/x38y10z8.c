inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 10, 8 }));
  set_short( "Passage - x38y10z8" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y10z8.c",
  "east" : DIR+"/rooms/x39y10z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
