inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 0 }));
  set_short( "Corridor - x12y62z0" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z0.c",
  "east" : DIR+"/rooms/x13y62z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
