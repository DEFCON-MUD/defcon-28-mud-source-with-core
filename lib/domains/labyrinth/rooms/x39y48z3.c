inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 3 }));
  set_short( "Passage - x39y48z3" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y49z3.c",
  "south" : DIR+"/rooms/x39y47z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
