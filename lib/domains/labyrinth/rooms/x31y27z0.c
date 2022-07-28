inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 0 }));
  set_short( "Hallway - x31y27z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z0.c",
  "south" : DIR+"/rooms/x31y26z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
