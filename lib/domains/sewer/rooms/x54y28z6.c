inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 28, 6 }));
  set_short( "Corridor - x54y28z6" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y28z6.c",
  "east" : DIR+"/rooms/x55y28z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
