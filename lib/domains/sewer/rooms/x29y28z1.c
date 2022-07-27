inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 1 }));
  set_short( "Corridor - x29y28z1" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y29z1.c",
  "south" : DIR+"/rooms/x29y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
