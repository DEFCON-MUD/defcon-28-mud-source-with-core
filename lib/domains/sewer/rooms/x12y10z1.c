inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 10, 1 }));
  set_short( "Corridor - x12y10z1" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y10z1.c",
  "east" : DIR+"/rooms/x13y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
