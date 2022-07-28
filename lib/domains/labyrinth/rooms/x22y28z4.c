inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 28, 4 }));
  set_short( "Passage - x22y28z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y28z4.c",
  "east" : DIR+"/rooms/x23y28z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
