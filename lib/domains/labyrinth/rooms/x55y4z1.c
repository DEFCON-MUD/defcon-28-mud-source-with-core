inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 1 }));
  set_short( "Hallway - x55y4z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z1.c",
  "east" : DIR+"/rooms/x56y4z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
