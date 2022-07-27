inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 4 }));
  set_short( "Corridor - x51y26z4" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z4.c",
  "north" : DIR+"/rooms/x51y27z4.c",
  "south" : DIR+"/rooms/x51y25z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
