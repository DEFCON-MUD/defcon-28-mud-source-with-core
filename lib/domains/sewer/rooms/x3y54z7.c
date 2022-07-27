inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 7 }));
  set_short( "Corridor - x3y54z7" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y54z7.c",
  "north" : DIR+"/rooms/x3y55z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
