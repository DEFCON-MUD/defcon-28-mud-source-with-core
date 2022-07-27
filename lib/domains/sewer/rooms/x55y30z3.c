inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 3 }));
  set_short( "Passage - x55y30z3" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y31z3.c",
  "south" : DIR+"/rooms/x55y29z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
