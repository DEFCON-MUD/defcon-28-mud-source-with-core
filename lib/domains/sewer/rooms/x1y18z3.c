inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 3 }));
  set_short( "Corridor - x1y18z3" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z3.c",
  "south" : DIR+"/rooms/x1y17z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
