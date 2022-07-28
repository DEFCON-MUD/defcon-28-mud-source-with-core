inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 7, 3 }));
  set_short( "Hallway - x23y7z3" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y8z3.c",
  "south" : DIR+"/rooms/x23y6z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
