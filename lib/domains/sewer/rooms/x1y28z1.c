inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 1 }));
  set_short( "Passage - x1y28z1" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z1.c",
  "north" : DIR+"/rooms/x1y29z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
