inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 0 }));
  set_short( "Passage - x1y52z0" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z0.c",
  "north" : DIR+"/rooms/x1y53z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
