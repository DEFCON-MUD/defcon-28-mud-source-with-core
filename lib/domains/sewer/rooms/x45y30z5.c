inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 5 }));
  set_short( "Passage - x45y30z5" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "south" : DIR+"/rooms/x45y29z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
