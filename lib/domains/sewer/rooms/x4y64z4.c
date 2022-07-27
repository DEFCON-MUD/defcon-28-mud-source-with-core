inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 4 }));
  set_short( "Hallway - x4y64z4" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z4.c",
  "east" : DIR+"/rooms/x5y64z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
