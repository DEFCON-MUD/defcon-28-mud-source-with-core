inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 39, 3 }));
  set_short( "Passage - x47y39z3" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y40z3.c",
  "south" : DIR+"/rooms/x47y38z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
