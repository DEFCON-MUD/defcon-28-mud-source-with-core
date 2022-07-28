inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 0 }));
  set_short( "Corridor - x3y35z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z0.c",
  "south" : DIR+"/rooms/x3y34z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
