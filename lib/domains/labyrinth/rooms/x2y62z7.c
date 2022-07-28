inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 7 }));
  set_short( "Corridor - x2y62z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z7.c",
  "east" : DIR+"/rooms/x3y62z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
