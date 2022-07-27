inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 64, 9 }));
  set_short( "Passage - x25y64z9" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y64z9.c",
  "east" : DIR+"/rooms/x26y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
