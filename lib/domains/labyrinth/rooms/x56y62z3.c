inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 62, 3 }));
  set_short( "Hallway - x56y62z3" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y62z3.c",
  "east" : DIR+"/rooms/x57y62z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
