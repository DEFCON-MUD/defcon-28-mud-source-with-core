inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 57, 0 }));
  set_short( "Passage - x17y57z0" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y58z0.c",
  "south" : DIR+"/rooms/x17y56z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
