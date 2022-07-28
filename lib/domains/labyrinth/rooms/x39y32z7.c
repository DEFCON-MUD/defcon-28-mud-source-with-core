inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 7 }));
  set_short( "Passage - x39y32z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y33z7.c",
  "south" : DIR+"/rooms/x39y31z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
