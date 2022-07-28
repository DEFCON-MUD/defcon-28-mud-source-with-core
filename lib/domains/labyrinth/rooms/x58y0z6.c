inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 6 }));
  set_short( "Passage - x58y0z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z6.c",
  "east" : DIR+"/rooms/x59y0z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
