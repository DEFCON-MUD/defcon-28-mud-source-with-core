inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 0 }));
  set_short( "Passage - x15y42z0" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y42z0.c",
  "north" : DIR+"/rooms/x15y43z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
