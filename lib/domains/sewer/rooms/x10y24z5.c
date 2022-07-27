inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 24, 5 }));
  set_short( "Passage - x10y24z5" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y24z5.c",
  "east" : DIR+"/rooms/x11y24z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
