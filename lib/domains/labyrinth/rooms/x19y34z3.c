inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 3 }));
  set_short( "Passage - x19y34z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y34z3.c",
  "north" : DIR+"/rooms/x19y35z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
