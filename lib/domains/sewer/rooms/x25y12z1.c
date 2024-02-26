inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 1 }));
  set_short( "Corridor - x25y12z1" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y12z1.c",
  "north" : DIR+"/rooms/x25y13z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
