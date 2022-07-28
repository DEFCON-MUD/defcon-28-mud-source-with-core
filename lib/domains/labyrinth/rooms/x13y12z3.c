inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 3 }));
  set_short( "Passage - x13y12z3" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y12z3.c",
  "north" : DIR+"/rooms/x13y13z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
