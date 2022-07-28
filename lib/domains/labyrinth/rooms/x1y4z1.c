inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 1 }));
  set_short( "Hallway - x1y4z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y5z1.c",
  "south" : DIR+"/rooms/x1y3z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
