inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 0 }));
  set_short( "Corridor - x59y56z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y56z0.c",
  "north" : DIR+"/rooms/x59y57z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
