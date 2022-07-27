inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 31, 5 }));
  set_short( "Corridor - x5y31z5" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y32z5.c",
  "south" : DIR+"/rooms/x5y30z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
