inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 9 }));
  set_short( "Corridor - x25y54z9" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y54z9.c",
  "north" : DIR+"/rooms/x25y55z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
