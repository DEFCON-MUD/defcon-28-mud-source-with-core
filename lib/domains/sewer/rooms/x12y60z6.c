inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 60, 6 }));
  set_short( "Hallway - x12y60z6" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y60z6.c",
  "east" : DIR+"/rooms/x13y60z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
