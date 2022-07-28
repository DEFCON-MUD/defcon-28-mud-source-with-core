inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 2 }));
  set_short( "Passage - x8y2z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y2z2.c",
  "east" : DIR+"/rooms/x9y2z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
