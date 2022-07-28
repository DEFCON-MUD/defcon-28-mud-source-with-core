inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 0 }));
  set_short( "Corridor - x1y8z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y8z0.c",
  "north" : DIR+"/rooms/x1y9z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
