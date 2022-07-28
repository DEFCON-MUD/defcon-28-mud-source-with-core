inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 4 }));
  set_short( "Hallway - x57y17z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z4.c",
  "south" : DIR+"/rooms/x57y16z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
