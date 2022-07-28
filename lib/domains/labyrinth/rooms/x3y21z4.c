inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 4 }));
  set_short( "Corridor - x3y21z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z4.c",
  "south" : DIR+"/rooms/x3y20z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
