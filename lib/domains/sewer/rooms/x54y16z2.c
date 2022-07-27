inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 2 }));
  set_short( "Hallway - x54y16z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z2.c",
  "east" : DIR+"/rooms/x55y16z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
