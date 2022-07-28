inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 5, 4 }));
  set_short( "Corridor - x3y5z4" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y6z4.c",
  "south" : DIR+"/rooms/x3y4z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
