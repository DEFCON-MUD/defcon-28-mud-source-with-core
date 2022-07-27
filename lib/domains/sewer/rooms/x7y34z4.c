inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 4 }));
  set_short( "Hallway - x7y34z4" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y34z4.c",
  "north" : DIR+"/rooms/x7y35z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
