inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 6, 6 }));
  set_short( "Corridor - x34y6z6" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y6z6.c",
  "east" : DIR+"/rooms/x35y6z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
