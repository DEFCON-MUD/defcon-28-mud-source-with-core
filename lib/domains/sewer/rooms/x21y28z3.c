inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 3 }));
  set_short( "Passage - x21y28z3" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y28z3.c",
  "north" : DIR+"/rooms/x21y29z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
