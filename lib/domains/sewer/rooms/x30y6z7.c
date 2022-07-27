inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 6, 7 }));
  set_short( "Corridor - x30y6z7" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y6z7.c",
  "east" : DIR+"/rooms/x31y6z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
