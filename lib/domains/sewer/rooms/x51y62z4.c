inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 4 }));
  set_short( "Hallway - x51y62z4" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y62z4.c",
  "east" : DIR+"/rooms/x52y62z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
