inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 6 }));
  set_short( "Passage - x1y60z6" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z6.c",
  "north" : DIR+"/rooms/x1y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
