inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 0 }));
  set_short( "Passage - x47y29z0" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z0.c",
  "south" : DIR+"/rooms/x47y28z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
