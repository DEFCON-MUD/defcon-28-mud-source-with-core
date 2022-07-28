inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 4 }));
  set_short( "Hallway - x57y46z4" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y47z4.c",
  "south" : DIR+"/rooms/x57y45z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
