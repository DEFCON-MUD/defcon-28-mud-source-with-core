inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 28, 8 }));
  set_short( "Corridor - x3y28z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y28z8.c",
  "east" : DIR+"/rooms/x4y28z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
