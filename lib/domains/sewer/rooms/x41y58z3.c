inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 3 }));
  set_short( "Corridor - x41y58z3" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y58z3.c",
  "south" : DIR+"/rooms/x41y57z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
