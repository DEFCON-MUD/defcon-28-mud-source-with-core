inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 38, 2 }));
  set_short( "Passage - x4y38z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y38z2.c",
  "east" : DIR+"/rooms/x5y38z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
