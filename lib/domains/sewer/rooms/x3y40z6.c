inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 6 }));
  set_short( "Corridor - x3y40z6" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y40z6.c",
  "north" : DIR+"/rooms/x3y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
