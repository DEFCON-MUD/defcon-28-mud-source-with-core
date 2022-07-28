inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 10, 1 }));
  set_short( "Hallway - x52y10z1" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y10z1.c",
  "east" : DIR+"/rooms/x53y10z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
