inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 3 }));
  set_short( "Passage - x25y14z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y14z3.c",
  "east" : DIR+"/rooms/x26y14z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
