inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 1 }));
  set_short( "Passage - x11y22z1" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y22z1.c",
  "south" : DIR+"/rooms/x11y21z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
