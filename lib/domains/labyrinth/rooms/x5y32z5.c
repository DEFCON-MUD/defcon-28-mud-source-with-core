inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 5 }));
  set_short( "Passage - x5y32z5" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y33z5.c",
  "south" : DIR+"/rooms/x5y31z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
