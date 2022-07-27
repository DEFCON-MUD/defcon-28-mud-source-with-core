inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 60, 9 }));
  set_short( "Hallway - x53y60z9" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y60z9.c",
  "north" : DIR+"/rooms/x53y61z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
