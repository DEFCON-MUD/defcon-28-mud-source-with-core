inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 29, 7 }));
  set_short( "Hallway - x27y29z7" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y30z7.c",
  "south" : DIR+"/rooms/x27y28z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
