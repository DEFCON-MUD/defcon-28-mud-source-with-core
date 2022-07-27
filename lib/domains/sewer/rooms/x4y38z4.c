inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 38, 4 }));
  set_short( "Passage - x4y38z4" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y38z4.c",
  "east" : DIR+"/rooms/x5y38z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
