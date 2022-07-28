inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 42, 8 }));
  set_short( "Passage - x37y42z8" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y42z8.c",
  "south" : DIR+"/rooms/x37y41z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
