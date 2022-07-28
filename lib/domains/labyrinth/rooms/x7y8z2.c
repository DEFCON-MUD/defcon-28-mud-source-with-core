inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 2 }));
  set_short( "Corridor - x7y8z2" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z2.c",
  "north" : DIR+"/rooms/x7y9z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
