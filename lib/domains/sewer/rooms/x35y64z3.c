inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 3 }));
  set_short( "Hallway - x35y64z3" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z3.c",
  "east" : DIR+"/rooms/x36y64z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
