inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 3 }));
  set_short( "Corridor - x31y56z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y56z3.c",
  "east" : DIR+"/rooms/x32y56z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
