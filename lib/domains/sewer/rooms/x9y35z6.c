inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 35, 6 }));
  set_short( "Hallway - x9y35z6" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y36z6.c",
  "south" : DIR+"/rooms/x9y34z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
