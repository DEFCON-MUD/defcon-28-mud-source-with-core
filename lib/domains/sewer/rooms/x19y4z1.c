inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 4, 1 }));
  set_short( "Corridor - x19y4z1" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y4z1.c",
  "north" : DIR+"/rooms/x19y5z1.c",
  "south" : DIR+"/rooms/x19y3z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
