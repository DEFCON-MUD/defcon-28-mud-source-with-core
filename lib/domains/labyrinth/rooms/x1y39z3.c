inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 3 }));
  set_short( "Hallway - x1y39z3" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z3.c",
  "south" : DIR+"/rooms/x1y38z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
