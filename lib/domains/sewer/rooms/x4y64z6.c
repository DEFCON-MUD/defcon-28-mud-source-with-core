inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 6 }));
  set_short( "Corridor - x4y64z6" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z6.c",
  "east" : DIR+"/rooms/x5y64z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
