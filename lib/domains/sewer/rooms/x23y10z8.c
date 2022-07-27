inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 8 }));
  set_short( "Hallway - x23y10z8" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y10z8.c",
  "south" : DIR+"/rooms/x23y9z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
