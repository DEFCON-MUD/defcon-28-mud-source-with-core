inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 3 }));
  set_short( "Passage - x7y18z3" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y18z3.c",
  "north" : DIR+"/rooms/x7y19z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
