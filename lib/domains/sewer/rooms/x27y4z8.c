inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 8 }));
  set_short( "Hallway - x27y4z8" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y4z8.c",
  "south" : DIR+"/rooms/x27y3z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
