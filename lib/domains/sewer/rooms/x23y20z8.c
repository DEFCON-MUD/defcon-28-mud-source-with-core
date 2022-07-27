inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 8 }));
  set_short( "Hallway - x23y20z8" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y20z8.c",
  "east" : DIR+"/rooms/x24y20z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
