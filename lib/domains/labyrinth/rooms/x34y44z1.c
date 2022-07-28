inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 44, 1 }));
  set_short( "Hallway - x34y44z1" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y44z1.c",
  "east" : DIR+"/rooms/x35y44z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
