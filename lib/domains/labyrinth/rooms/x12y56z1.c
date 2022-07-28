inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 56, 1 }));
  set_short( "Passage - x12y56z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y56z1.c",
  "east" : DIR+"/rooms/x13y56z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
