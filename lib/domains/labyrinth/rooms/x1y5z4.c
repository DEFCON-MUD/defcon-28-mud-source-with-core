inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 4 }));
  set_short( "Hallway - x1y5z4" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z4.c",
  "south" : DIR+"/rooms/x1y4z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
