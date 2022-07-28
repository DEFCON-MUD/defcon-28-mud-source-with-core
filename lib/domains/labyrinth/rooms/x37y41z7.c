inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 7 }));
  set_short( "Hallway - x37y41z7" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z7.c",
  "south" : DIR+"/rooms/x37y40z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
