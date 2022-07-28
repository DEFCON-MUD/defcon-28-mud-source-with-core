inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 4 }));
  set_short( "Passage - x5y58z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y58z4.c",
  "east" : DIR+"/rooms/x6y58z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
