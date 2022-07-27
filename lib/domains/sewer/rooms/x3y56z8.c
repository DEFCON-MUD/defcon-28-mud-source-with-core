inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 8 }));
  set_short( "Corridor - x3y56z8" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y56z8.c",
  "north" : DIR+"/rooms/x3y57z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
