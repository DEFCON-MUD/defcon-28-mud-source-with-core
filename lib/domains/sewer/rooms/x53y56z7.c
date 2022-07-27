inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 7 }));
  set_short( "Passage - x53y56z7" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y56z7.c",
  "south" : DIR+"/rooms/x53y55z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
