inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 1 }));
  set_short( "Corridor - x55y41z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z1.c",
  "south" : DIR+"/rooms/x55y40z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
