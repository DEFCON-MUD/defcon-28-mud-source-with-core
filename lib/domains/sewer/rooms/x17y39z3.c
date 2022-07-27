inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 39, 3 }));
  set_short( "Corridor - x17y39z3" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y40z3.c",
  "south" : DIR+"/rooms/x17y38z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
