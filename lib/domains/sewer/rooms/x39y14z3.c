inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 3 }));
  set_short( "Passage - x39y14z3" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y14z3.c",
  "north" : DIR+"/rooms/x39y15z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
