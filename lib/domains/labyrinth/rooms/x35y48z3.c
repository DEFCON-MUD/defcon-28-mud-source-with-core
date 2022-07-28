inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 3 }));
  set_short( "Passage - x35y48z3" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y48z3.c",
  "east" : DIR+"/rooms/x36y48z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
