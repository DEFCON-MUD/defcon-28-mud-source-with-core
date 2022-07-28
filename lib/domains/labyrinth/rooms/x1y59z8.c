inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 59, 8 }));
  set_short( "Hallway - x1y59z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y60z8.c",
  "south" : DIR+"/rooms/x1y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
