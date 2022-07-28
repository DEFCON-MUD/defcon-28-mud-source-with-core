inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 4 }));
  set_short( "Passage - x15y18z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y18z4.c",
  "south" : DIR+"/rooms/x15y17z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
