inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 20, 3 }));
  set_short( "Passage - x58y20z3" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y20z3.c",
  "east" : DIR+"/rooms/x59y20z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
