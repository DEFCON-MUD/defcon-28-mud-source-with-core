inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 9 }));
  set_short( "Passage - x59y56z9" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y57z9.c",
  "south" : DIR+"/rooms/x59y55z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
