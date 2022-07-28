inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 28, 7 }));
  set_short( "Hallway - x4y28z7" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y28z7.c",
  "east" : DIR+"/rooms/x5y28z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
