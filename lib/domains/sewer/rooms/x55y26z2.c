inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 2 }));
  set_short( "Corridor - x55y26z2" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z2.c",
  "south" : DIR+"/rooms/x55y25z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
