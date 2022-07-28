inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 30, 9 }));
  set_short( "Hallway - x21y30z9" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y30z9.c",
  "east" : DIR+"/rooms/x22y30z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
