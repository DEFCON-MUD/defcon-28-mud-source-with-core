inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 3 }));
  set_short( "Hallway - x7y13z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z3.c",
  "south" : DIR+"/rooms/x7y12z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
