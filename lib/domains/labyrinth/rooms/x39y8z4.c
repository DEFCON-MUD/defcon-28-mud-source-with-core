inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 4 }));
  set_short( "Hallway - x39y8z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z4.c",
  "south" : DIR+"/rooms/x39y7z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
