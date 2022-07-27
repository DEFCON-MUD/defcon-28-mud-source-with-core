inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 2 }));
  set_short( "Corridor - x2y20z2" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z2.c",
  "east" : DIR+"/rooms/x3y20z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
