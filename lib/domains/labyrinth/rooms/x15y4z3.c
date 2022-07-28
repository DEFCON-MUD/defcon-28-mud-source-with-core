inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 3 }));
  set_short( "Hallway - x15y4z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y4z3.c",
  "north" : DIR+"/rooms/x15y5z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
