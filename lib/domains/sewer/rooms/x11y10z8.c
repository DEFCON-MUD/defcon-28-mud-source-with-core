inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 8 }));
  set_short( "Passage - x11y10z8" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y10z8.c",
  "south" : DIR+"/rooms/x11y9z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
