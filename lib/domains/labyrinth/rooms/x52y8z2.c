inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 8, 2 }));
  set_short( "Passage - x52y8z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y8z2.c",
  "east" : DIR+"/rooms/x53y8z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
