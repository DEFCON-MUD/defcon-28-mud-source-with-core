inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 7 }));
  set_short( "Corridor - x1y60z7" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z7.c",
  "north" : DIR+"/rooms/x1y61z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
