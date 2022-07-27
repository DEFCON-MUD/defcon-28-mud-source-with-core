inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 5 }));
  set_short( "Hallway - x51y26z5" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z5.c",
  "south" : DIR+"/rooms/x51y25z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
