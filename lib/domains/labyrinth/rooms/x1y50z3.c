inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 3 }));
  set_short( "Passage - x1y50z3" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y51z3.c",
  "south" : DIR+"/rooms/x1y49z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
