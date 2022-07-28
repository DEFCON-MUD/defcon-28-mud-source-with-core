inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 4 }));
  set_short( "Hallway - x49y18z4" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y18z4.c",
  "north" : DIR+"/rooms/x49y19z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
