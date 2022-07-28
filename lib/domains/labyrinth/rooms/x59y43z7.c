inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 7 }));
  set_short( "Corridor - x59y43z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z7.c",
  "south" : DIR+"/rooms/x59y42z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
