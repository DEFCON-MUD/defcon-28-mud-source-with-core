inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 2 }));
  set_short( "Passage - x7y22z2" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y21z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
