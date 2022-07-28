inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 45, 7 }));
  set_short( "Passage - x25y45z7" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y46z7.c",
  "south" : DIR+"/rooms/x25y44z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
