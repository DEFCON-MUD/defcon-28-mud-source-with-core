inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 5 }));
  set_short( "Hallway - x7y38z5" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y38z5.c",
  "south" : DIR+"/rooms/x7y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
