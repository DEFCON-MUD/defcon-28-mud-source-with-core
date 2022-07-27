inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 25, 0 }));
  set_short( "Corridor - x19y25z0" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y26z0.c",
  "south" : DIR+"/rooms/x19y24z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
