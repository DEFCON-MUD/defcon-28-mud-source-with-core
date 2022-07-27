inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 7 }));
  set_short( "Corridor - x31y34z7" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y34z7.c",
  "north" : DIR+"/rooms/x31y35z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
