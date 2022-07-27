inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 0 }));
  set_short( "Hallway - x1y26z0" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y26z0.c",
  "south" : DIR+"/rooms/x1y25z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
