inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 38, 1 }));
  set_short( "Hallway - x40y38z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y38z1.c",
  "east" : DIR+"/rooms/x41y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
