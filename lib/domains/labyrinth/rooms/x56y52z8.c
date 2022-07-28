inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 52, 8 }));
  set_short( "Corridor - x56y52z8" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y52z8.c",
  "east" : DIR+"/rooms/x57y52z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
