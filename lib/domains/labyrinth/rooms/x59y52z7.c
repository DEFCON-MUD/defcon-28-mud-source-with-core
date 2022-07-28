inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 7 }));
  set_short( "Hallway - x59y52z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y52z7.c",
  "north" : DIR+"/rooms/x59y53z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
