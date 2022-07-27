inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 0 }));
  set_short( "Hallway - x37y12z0" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y12z0.c",
  "east" : DIR+"/rooms/x38y12z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
