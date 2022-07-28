inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 8 }));
  set_short( "Passage - x31y50z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y50z8.c",
  "north" : DIR+"/rooms/x31y51z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
