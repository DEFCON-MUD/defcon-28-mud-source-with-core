inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 1 }));
  set_short( "Corridor - x37y28z1" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y28z1.c",
  "south" : DIR+"/rooms/x37y27z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
