inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 57, 6 }));
  set_short( "Corridor - x51y57z6" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y58z6.c",
  "south" : DIR+"/rooms/x51y56z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
