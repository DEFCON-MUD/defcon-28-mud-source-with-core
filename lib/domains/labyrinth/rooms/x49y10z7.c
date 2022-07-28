inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 7 }));
  set_short( "Hallway - x49y10z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y10z7.c",
  "north" : DIR+"/rooms/x49y11z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
