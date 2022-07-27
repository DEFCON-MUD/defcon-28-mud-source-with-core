inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 8 }));
  set_short( "Hallway - x3y14z8" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z8.c",
  "east" : DIR+"/rooms/x4y14z8.c",
  "north" : DIR+"/rooms/x3y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
