inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 8 }));
  set_short( "Passage - x25y20z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z8.c",
  "east" : DIR+"/rooms/x26y20z8.c",
  "north" : DIR+"/rooms/x25y21z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
