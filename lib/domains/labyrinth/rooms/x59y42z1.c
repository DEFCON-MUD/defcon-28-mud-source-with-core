inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 1 }));
  set_short( "Passage - x59y42z1" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y42z1.c",
  "east" : DIR+"/rooms/x60y42z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
