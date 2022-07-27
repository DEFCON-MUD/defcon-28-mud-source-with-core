inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 11, 3 }));
  set_short( "Passage - x23y11z3" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y12z3.c",
  "south" : DIR+"/rooms/x23y10z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
