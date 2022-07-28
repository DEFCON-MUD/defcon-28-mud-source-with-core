inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 3 }));
  set_short( "Hallway - x56y0z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z3.c",
  "east" : DIR+"/rooms/x57y0z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
