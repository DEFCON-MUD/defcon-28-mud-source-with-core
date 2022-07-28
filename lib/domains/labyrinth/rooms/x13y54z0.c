inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 0 }));
  set_short( "Passage - x13y54z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y54z0.c",
  "south" : DIR+"/rooms/x13y53z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
