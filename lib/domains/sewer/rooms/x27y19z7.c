inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 19, 7 }));
  set_short( "Corridor - x27y19z7" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y20z7.c",
  "south" : DIR+"/rooms/x27y18z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
