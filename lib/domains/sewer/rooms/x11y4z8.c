inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 8 }));
  set_short( "Corridor - x11y4z8" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z8.c",
  "north" : DIR+"/rooms/x11y5z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
