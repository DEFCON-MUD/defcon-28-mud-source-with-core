inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 31, 8 }));
  set_short( "Hallway - x19y31z8" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y32z8.c",
  "south" : DIR+"/rooms/x19y30z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
