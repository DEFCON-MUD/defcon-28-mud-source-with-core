inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 2 }));
  set_short( "Passage - x29y45z2" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z2.c",
  "south" : DIR+"/rooms/x29y44z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
