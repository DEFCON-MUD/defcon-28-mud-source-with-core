inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 3 }));
  set_short( "Corridor - x5y35z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z3.c",
  "south" : DIR+"/rooms/x5y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
