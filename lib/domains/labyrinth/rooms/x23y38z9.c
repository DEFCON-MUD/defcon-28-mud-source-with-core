inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 9 }));
  set_short( "Corridor - x23y38z9" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y39z9.c",
  "south" : DIR+"/rooms/x23y37z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
