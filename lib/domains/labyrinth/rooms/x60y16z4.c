inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 16, 4 }));
  set_short( "Hallway - x60y16z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y16z4.c",
  "east" : DIR+"/rooms/x61y16z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
