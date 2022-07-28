inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 6 }));
  set_short( "Passage - x51y8z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y8z6.c",
  "north" : DIR+"/rooms/x51y9z6.c",
  "south" : DIR+"/rooms/x51y7z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
