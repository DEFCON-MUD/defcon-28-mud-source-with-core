inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 37, 5 }));
  set_short( "Hallway - x53y37z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y38z5.c",
  "south" : DIR+"/rooms/x53y36z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
