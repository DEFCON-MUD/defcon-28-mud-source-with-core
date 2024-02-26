inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 7, 4 }));
  set_short( "Hallway - x9y7z4" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y8z4.c",
  "south" : DIR+"/rooms/x9y6z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
