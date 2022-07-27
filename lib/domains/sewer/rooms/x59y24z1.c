inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 1 }));
  set_short( "Passage - x59y24z1" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y24z1.c",
  "south" : DIR+"/rooms/x59y23z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
