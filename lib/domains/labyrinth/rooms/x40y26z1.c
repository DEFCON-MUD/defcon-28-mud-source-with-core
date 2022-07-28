inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 26, 1 }));
  set_short( "Passage - x40y26z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y26z1.c",
  "east" : DIR+"/rooms/x41y26z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
