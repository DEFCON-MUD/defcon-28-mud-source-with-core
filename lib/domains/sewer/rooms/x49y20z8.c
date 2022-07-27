inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 20, 8 }));
  set_short( "Passage - x49y20z8" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y20z8.c",
  "east" : DIR+"/rooms/x50y20z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
