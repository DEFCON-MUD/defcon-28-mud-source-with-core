inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 3 }));
  set_short( "Passage - x53y64z3" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z3.c",
  "east" : DIR+"/rooms/x54y64z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
