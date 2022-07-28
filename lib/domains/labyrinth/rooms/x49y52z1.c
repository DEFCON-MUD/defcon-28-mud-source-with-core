inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 1 }));
  set_short( "Corridor - x49y52z1" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z1.c",
  "north" : DIR+"/rooms/x49y53z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
