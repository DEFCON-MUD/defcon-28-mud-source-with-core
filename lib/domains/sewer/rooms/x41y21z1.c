inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 1 }));
  set_short( "Hallway - x41y21z1" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z1.c",
  "south" : DIR+"/rooms/x41y20z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
