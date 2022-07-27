inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 3, 6 }));
  set_short( "Passage - x33y3z6" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y4z6.c",
  "south" : DIR+"/rooms/x33y2z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
