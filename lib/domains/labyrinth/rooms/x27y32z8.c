inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 8 }));
  set_short( "Corridor - x27y32z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y32z8.c",
  "north" : DIR+"/rooms/x27y33z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
