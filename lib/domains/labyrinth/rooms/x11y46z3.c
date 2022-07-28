inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 3 }));
  set_short( "Hallway - x11y46z3" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y46z3.c",
  "south" : DIR+"/rooms/x11y45z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
