inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 1 }));
  set_short( "Hallway - x40y2z1" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z1.c",
  "east" : DIR+"/rooms/x41y2z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
