inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 3 }));
  set_short( "Corridor - x3y38z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y38z3.c",
  "north" : DIR+"/rooms/x3y39z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
