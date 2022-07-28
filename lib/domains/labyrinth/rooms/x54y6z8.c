inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 6, 8 }));
  set_short( "Passage - x54y6z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y6z8.c",
  "east" : DIR+"/rooms/x55y6z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
