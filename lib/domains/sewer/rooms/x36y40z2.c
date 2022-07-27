inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 40, 2 }));
  set_short( "Passage - x36y40z2" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y40z2.c",
  "east" : DIR+"/rooms/x37y40z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
