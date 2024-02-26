inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 8 }));
  set_short( "Passage - x19y14z8" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z8.c",
  "north" : DIR+"/rooms/x19y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
