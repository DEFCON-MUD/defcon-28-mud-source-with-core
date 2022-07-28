inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 27, 8 }));
  set_short( "Passage - x5y27z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y28z8.c",
  "south" : DIR+"/rooms/x5y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
