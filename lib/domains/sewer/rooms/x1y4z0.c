inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 0 }));
  set_short( "Passage - x1y4z0" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y5z0.c",
  "south" : DIR+"/rooms/x1y3z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
