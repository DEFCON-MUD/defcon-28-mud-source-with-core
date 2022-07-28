inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 6 }));
  set_short( "Hallway - x53y26z6" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y26z6.c",
  "south" : DIR+"/rooms/x53y25z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
