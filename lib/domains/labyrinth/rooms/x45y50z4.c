inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 4 }));
  set_short( "Passage - x45y50z4" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y50z4.c",
  "south" : DIR+"/rooms/x45y49z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
