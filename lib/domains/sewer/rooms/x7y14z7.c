inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 7 }));
  set_short( "Corridor - x7y14z7" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y14z7.c",
  "north" : DIR+"/rooms/x7y15z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
