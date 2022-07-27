inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 1 }));
  set_short( "Hallway - x31y10z1" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y10z1.c",
  "south" : DIR+"/rooms/x31y9z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
