inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 0 }));
  set_short( "Corridor - x37y28z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y29z0.c",
  "south" : DIR+"/rooms/x37y27z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
