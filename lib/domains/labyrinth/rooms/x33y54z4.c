inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 4 }));
  set_short( "Corridor - x33y54z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y54z4.c",
  "east" : DIR+"/rooms/x34y54z4.c",
  "north" : DIR+"/rooms/x33y55z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
