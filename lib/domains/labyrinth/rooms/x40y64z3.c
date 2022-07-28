inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 3 }));
  set_short( "Passage - x40y64z3" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z3.c",
  "east" : DIR+"/rooms/x41y64z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
