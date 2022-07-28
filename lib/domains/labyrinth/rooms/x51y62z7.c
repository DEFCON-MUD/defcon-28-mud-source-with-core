inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 7 }));
  set_short( "Hallway - x51y62z7" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y62z7.c",
  "north" : DIR+"/rooms/x51y63z7.c",
  "south" : DIR+"/rooms/x51y61z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
