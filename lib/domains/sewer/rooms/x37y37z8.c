inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 37, 8 }));
  set_short( "Passage - x37y37z8" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y38z8.c",
  "south" : DIR+"/rooms/x37y36z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
