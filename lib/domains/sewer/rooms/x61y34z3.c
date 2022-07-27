inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 3 }));
  set_short( "Corridor - x61y34z3" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z3.c",
  "north" : DIR+"/rooms/x61y35z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
