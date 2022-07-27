inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 46, 2 }));
  set_short( "Hallway - x42y46z2" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y46z2.c",
  "east" : DIR+"/rooms/x43y46z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
