inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 9 }));
  set_short( "Corridor - x3y11z9" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z9.c",
  "south" : DIR+"/rooms/x3y10z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
