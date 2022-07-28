inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 40, 0 }));
  set_short( "Passage - x32y40z0" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y40z0.c",
  "east" : DIR+"/rooms/x33y40z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
