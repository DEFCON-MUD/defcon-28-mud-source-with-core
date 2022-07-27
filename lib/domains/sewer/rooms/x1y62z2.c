inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 2 }));
  set_short( "Corridor - x1y62z2" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z2.c",
  "south" : DIR+"/rooms/x1y61z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
