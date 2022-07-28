inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 39, 0 }));
  set_short( "Hallway - x61y39z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y40z0.c",
  "south" : DIR+"/rooms/x61y38z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
