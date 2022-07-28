inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 34, 8 }));
  set_short( "Passage - x12y34z8" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y34z8.c",
  "east" : DIR+"/rooms/x13y34z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
