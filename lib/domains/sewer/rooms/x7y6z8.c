inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 8 }));
  set_short( "Hallway - x7y6z8" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y6z8.c",
  "east" : DIR+"/rooms/x8y6z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
