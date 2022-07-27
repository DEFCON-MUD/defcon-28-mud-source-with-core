inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 0 }));
  set_short( "Hallway - x41y40z0" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z0.c",
  "south" : DIR+"/rooms/x41y39z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
