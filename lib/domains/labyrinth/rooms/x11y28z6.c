inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 6 }));
  set_short( "Hallway - x11y28z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y28z6.c",
  "north" : DIR+"/rooms/x11y29z6.c",
  "south" : DIR+"/rooms/x11y27z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
