inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 28, 5 }));
  set_short( "Hallway - x24y28z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y28z5.c",
  "east" : DIR+"/rooms/x25y28z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
