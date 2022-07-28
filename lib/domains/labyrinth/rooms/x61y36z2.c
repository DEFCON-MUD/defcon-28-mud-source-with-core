inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 2 }));
  set_short( "Hallway - x61y36z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y37z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
