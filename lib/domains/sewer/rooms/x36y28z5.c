inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 28, 5 }));
  set_short( "Hallway - x36y28z5" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y28z5.c",
  "east" : DIR+"/rooms/x37y28z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
