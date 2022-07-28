inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 0 }));
  set_short( "Hallway - x49y28z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y28z0.c",
  "north" : DIR+"/rooms/x49y29z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
