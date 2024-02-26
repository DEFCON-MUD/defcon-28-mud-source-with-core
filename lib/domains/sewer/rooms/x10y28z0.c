inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 0 }));
  set_short( "Hallway - x10y28z0" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z0.c",
  "east" : DIR+"/rooms/x11y28z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
