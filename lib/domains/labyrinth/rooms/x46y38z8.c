inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 38, 8 }));
  set_short( "Corridor - x46y38z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y38z8.c",
  "east" : DIR+"/rooms/x47y38z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
