inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 2 }));
  set_short( "Hallway - x41y58z2" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y58z2.c",
  "south" : DIR+"/rooms/x41y57z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
