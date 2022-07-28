inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 42, 8 }));
  set_short( "Passage - x50y42z8" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y42z8.c",
  "east" : DIR+"/rooms/x51y42z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
