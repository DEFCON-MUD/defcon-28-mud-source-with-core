inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 1 }));
  set_short( "Hallway - x49y6z1" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y6z1.c",
  "south" : DIR+"/rooms/x49y5z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
