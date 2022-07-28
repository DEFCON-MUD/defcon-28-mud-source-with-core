inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 7, 8 }));
  set_short( "Corridor - x25y7z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y8z8.c",
  "south" : DIR+"/rooms/x25y6z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
