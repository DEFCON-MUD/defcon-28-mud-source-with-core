inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 3 }));
  set_short( "Hallway - x23y10z3" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y11z3.c",
  "south" : DIR+"/rooms/x23y9z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
