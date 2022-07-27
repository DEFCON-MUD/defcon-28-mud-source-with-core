inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 0 }));
  set_short( "Passage - x37y18z0" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y18z0.c",
  "south" : DIR+"/rooms/x37y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
