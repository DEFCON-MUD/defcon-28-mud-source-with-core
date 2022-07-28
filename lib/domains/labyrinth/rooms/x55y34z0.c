inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 0 }));
  set_short( "Corridor - x55y34z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y35z0.c",
  "south" : DIR+"/rooms/x55y33z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
