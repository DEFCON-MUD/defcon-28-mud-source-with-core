inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 38, 6 }));
  set_short( "Corridor - x31y38z6" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y38z6.c",
  "east" : DIR+"/rooms/x32y38z6.c",
  "north" : DIR+"/rooms/x31y39z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
