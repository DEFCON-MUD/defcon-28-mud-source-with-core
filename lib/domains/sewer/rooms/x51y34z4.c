inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 4 }));
  set_short( "Corridor - x51y34z4" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y34z4.c",
  "north" : DIR+"/rooms/x51y35z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
