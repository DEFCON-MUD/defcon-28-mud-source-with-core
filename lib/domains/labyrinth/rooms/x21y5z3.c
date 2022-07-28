inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 5, 3 }));
  set_short( "Corridor - x21y5z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y6z3.c",
  "south" : DIR+"/rooms/x21y4z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
