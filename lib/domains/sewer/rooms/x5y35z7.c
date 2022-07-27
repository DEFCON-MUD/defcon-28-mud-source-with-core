inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 7 }));
  set_short( "Corridor - x5y35z7" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z7.c",
  "south" : DIR+"/rooms/x5y34z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
