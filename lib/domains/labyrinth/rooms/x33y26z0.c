inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 0 }));
  set_short( "Passage - x33y26z0" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z0.c",
  "east" : DIR+"/rooms/x34y26z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
