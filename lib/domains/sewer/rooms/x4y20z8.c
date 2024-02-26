inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 8 }));
  set_short( "Corridor - x4y20z8" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z8.c",
  "east" : DIR+"/rooms/x5y20z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
