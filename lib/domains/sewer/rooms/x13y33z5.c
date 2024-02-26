inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 5 }));
  set_short( "Passage - x13y33z5" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z5.c",
  "south" : DIR+"/rooms/x13y32z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
