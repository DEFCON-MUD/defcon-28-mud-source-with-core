inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 7, 3 }));
  set_short( "Hallway - x51y7z3" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y8z3.c",
  "south" : DIR+"/rooms/x51y6z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
