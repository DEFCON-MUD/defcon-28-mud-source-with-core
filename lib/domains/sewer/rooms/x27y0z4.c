inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 4 }));
  set_short( "Hallway - x27y0z4" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z4.c",
  "east" : DIR+"/rooms/x28y0z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
