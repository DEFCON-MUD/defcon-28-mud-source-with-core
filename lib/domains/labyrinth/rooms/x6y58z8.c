inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 58, 8 }));
  set_short( "Hallway - x6y58z8" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y58z8.c",
  "east" : DIR+"/rooms/x7y58z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
