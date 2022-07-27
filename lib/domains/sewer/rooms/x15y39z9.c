inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 39, 9 }));
  set_short( "Corridor - x15y39z9" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y40z9.c",
  "south" : DIR+"/rooms/x15y38z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
