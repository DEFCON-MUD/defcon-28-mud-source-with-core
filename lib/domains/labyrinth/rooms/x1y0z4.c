inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 4 }));
  set_short( "Hallway - x1y0z4" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
