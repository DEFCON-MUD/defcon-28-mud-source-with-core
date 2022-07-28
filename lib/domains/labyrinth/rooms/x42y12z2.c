inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 12, 2 }));
  set_short( "Hallway - x42y12z2" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y12z2.c",
  "east" : DIR+"/rooms/x43y12z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
