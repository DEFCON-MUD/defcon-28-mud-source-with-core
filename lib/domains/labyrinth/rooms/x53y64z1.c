inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 1 }));
  set_short( "Corridor - x53y64z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z1.c",
  "east" : DIR+"/rooms/x54y64z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
