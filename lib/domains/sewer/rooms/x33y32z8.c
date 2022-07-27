inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 8 }));
  set_short( "Passage - x33y32z8" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y32z8.c",
  "south" : DIR+"/rooms/x33y31z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
