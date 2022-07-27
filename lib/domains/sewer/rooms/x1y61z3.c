inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 3 }));
  set_short( "Corridor - x1y61z3" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z3.c",
  "south" : DIR+"/rooms/x1y60z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
