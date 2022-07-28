inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 1 }));
  set_short( "Hallway - x49y6z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y6z1.c",
  "south" : DIR+"/rooms/x49y5z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
