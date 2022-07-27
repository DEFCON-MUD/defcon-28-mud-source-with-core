inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 0 }));
  set_short( "Hallway - x5y17z0" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z0.c",
  "south" : DIR+"/rooms/x5y16z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
