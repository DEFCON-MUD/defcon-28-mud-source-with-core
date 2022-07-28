inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 7 }));
  set_short( "Passage - x23y56z7" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y57z7.c",
  "south" : DIR+"/rooms/x23y55z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
