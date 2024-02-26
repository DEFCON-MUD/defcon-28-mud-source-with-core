inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 4 }));
  set_short( "Passage - x31y46z4" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y46z4.c",
  "south" : DIR+"/rooms/x31y45z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
