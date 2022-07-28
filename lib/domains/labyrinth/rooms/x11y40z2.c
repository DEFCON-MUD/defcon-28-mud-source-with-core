inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 2 }));
  set_short( "Passage - x11y40z2" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y40z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
