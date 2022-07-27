inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 3 }));
  set_short( "Passage - x43y22z3" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y22z3.c",
  "north" : DIR+"/rooms/x43y23z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
