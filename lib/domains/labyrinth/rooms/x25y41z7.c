inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 41, 7 }));
  set_short( "Passage - x25y41z7" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y42z7.c",
  "south" : DIR+"/rooms/x25y40z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
