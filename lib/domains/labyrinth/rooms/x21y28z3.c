inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 3 }));
  set_short( "Passage - x21y28z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y28z3.c",
  "north" : DIR+"/rooms/x21y29z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
