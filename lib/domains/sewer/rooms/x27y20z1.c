inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 1 }));
  set_short( "Corridor - x27y20z1" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y20z1.c",
  "north" : DIR+"/rooms/x27y21z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
