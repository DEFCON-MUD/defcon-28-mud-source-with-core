inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 3 }));
  set_short( "Passage - x19y12z3" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y13z3.c",
  "south" : DIR+"/rooms/x19y11z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
