inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 42, 8 }));
  set_short( "Hallway - x22y42z8" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y42z8.c",
  "east" : DIR+"/rooms/x23y42z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
