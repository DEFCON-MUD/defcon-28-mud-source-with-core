inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 1, 3 }));
  set_short( "Passage - x1y1z3" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y2z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
