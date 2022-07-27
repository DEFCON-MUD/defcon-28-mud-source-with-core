inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 4 }));
  set_short( "Hallway - x1y62z4" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z4.c",
  "south" : DIR+"/rooms/x1y61z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
