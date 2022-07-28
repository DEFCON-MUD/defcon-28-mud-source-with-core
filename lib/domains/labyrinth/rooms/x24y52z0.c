inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 52, 0 }));
  set_short( "Hallway - x24y52z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y52z0.c",
  "east" : DIR+"/rooms/x25y52z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
