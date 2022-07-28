inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 59, 6 }));
  set_short( "Hallway - x25y59z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y60z6.c",
  "south" : DIR+"/rooms/x25y58z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
