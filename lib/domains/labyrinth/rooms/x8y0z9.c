inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 0, 9 }));
  set_short( "Hallway - x8y0z9" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y0z9.c",
  "east" : DIR+"/rooms/x9y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
