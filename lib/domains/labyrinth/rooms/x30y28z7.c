inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 28, 7 }));
  set_short( "Corridor - x30y28z7" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y28z7.c",
  "east" : DIR+"/rooms/x31y28z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
