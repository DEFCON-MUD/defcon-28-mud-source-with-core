inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 27, 1 }));
  set_short( "Hallway - x59y27z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y28z1.c",
  "south" : DIR+"/rooms/x59y26z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
