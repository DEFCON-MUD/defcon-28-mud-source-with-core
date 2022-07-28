inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 4 }));
  set_short( "Passage - x61y4z4" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y4z4.c",
  "south" : DIR+"/rooms/x61y3z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
