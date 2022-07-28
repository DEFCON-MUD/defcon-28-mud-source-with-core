inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 50, 1 }));
  set_short( "Passage - x60y50z1" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y50z1.c",
  "east" : DIR+"/rooms/x61y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
