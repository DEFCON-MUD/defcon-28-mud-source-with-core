inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 3 }));
  set_short( "Hallway - x59y54z3" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y54z3.c",
  "east" : DIR+"/rooms/x60y54z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
