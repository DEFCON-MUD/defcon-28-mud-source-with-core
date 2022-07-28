inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 54, 3 }));
  set_short( "Passage - x30y54z3" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y54z3.c",
  "east" : DIR+"/rooms/x31y54z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
