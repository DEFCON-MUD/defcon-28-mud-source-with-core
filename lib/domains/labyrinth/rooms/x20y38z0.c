inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 38, 0 }));
  set_short( "Hallway - x20y38z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y38z0.c",
  "east" : DIR+"/rooms/x21y38z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
