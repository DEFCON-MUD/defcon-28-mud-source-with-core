inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 8 }));
  set_short( "Hallway - x51y37z8" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z8.c",
  "south" : DIR+"/rooms/x51y36z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
