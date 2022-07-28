inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 41, 8 }));
  set_short( "Passage - x35y41z8" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y42z8.c",
  "south" : DIR+"/rooms/x35y40z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
