inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 3 }));
  set_short( "Hallway - x23y56z3" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y57z3.c",
  "south" : DIR+"/rooms/x23y55z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
