inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 3 }));
  set_short( "Passage - x59y44z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y45z3.c",
  "south" : DIR+"/rooms/x59y43z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
