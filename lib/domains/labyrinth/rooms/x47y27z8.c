inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 27, 8 }));
  set_short( "Corridor - x47y27z8" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y28z8.c",
  "south" : DIR+"/rooms/x47y26z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
