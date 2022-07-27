inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 26, 0 }));
  set_short( "Passage - x39y26z0" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y26z0.c",
  "north" : DIR+"/rooms/x39y27z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
