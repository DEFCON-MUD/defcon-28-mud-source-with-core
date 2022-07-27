inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 5 }));
  set_short( "Hallway - x3y12z5" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y13z5.c",
  "south" : DIR+"/rooms/x3y11z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
