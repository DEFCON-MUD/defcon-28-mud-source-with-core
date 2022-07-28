inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 10, 0 }));
  set_short( "Corridor - x10y10z0" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y10z0.c",
  "east" : DIR+"/rooms/x11y10z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
