inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 7 }));
  set_short( "Hallway - x38y0z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z7.c",
  "east" : DIR+"/rooms/x39y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
