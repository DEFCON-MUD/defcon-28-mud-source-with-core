inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 62, 4 }));
  set_short( "Passage - x61y62z4" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y62z4.c",
  "south" : DIR+"/rooms/x61y61z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
