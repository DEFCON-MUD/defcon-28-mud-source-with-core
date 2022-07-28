inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 1 }));
  set_short( "Passage - x33y6z1" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y7z1.c",
  "south" : DIR+"/rooms/x33y5z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
