inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 7 }));
  set_short( "Hallway - x51y26z7" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z7.c",
  "north" : DIR+"/rooms/x51y27z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
