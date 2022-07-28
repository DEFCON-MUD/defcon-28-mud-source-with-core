inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 1 }));
  set_short( "Corridor - x47y28z1" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y28z1.c",
  "south" : DIR+"/rooms/x47y27z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
