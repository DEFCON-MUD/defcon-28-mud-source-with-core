inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 4 }));
  set_short( "Corridor - x5y22z4" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y23z4.c",
  "south" : DIR+"/rooms/x5y21z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
