inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 1 }));
  set_short( "Hallway - x21y15z1" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z1.c",
  "south" : DIR+"/rooms/x21y14z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
