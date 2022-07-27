inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 0 }));
  set_short( "Passage - x1y52z0" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z0.c",
  "north" : DIR+"/rooms/x1y53z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
