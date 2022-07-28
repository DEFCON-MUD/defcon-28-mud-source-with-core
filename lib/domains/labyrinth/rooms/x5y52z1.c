inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 1 }));
  set_short( "Passage - x5y52z1" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y52z1.c",
  "north" : DIR+"/rooms/x5y53z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
