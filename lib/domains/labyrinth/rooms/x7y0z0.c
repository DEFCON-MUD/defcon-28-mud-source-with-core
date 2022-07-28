inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 0 }));
  set_short( "Hallway - x7y0z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z0.c",
  "east" : DIR+"/rooms/x8y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
