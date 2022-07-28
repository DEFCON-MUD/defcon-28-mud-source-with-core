inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 12, 6 }));
  set_short( "Corridor - x61y12z6" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y12z6.c",
  "north" : DIR+"/rooms/x61y13z6.c",
  "south" : DIR+"/rooms/x61y11z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
