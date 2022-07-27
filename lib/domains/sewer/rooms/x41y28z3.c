inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 3 }));
  set_short( "Hallway - x41y28z3" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z3.c",
  "south" : DIR+"/rooms/x41y27z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
