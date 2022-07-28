inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 4 }));
  set_short( "Hallway - x55y58z4" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z4.c",
  "south" : DIR+"/rooms/x55y57z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
