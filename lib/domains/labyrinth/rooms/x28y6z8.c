inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 6, 8 }));
  set_short( "Corridor - x28y6z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y6z8.c",
  "east" : DIR+"/rooms/x29y6z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
