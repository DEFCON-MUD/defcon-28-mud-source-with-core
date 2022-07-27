inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 3 }));
  set_short( "Passage - x57y28z3" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y28z3.c",
  "north" : DIR+"/rooms/x57y29z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
