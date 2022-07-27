inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 3 }));
  set_short( "Corridor - x29y34z3" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y35z3.c",
  "south" : DIR+"/rooms/x29y33z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
