inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 8 }));
  set_short( "Hallway - x5y6z8" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y6z8.c",
  "north" : DIR+"/rooms/x5y7z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
