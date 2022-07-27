inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 8 }));
  set_short( "Passage - x13y20z8" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y20z8.c",
  "south" : DIR+"/rooms/x13y19z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
