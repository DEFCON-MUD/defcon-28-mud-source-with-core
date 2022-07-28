inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 16, 0 }));
  set_short( "Passage - x18y16z0" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y16z0.c",
  "east" : DIR+"/rooms/x19y16z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
