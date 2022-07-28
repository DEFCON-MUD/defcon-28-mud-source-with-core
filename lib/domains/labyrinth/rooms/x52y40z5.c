inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 40, 5 }));
  set_short( "Corridor - x52y40z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y40z5.c",
  "east" : DIR+"/rooms/x53y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
