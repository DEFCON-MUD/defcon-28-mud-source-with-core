inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 6 }));
  set_short( "Hallway - x3y14z6" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z6.c",
  "east" : DIR+"/rooms/x4y14z6.c",
  "north" : DIR+"/rooms/x3y15z6.c",
  "south" : DIR+"/rooms/x3y13z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
