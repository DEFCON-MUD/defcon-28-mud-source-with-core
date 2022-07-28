inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 4 }));
  set_short( "Hallway - x13y54z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y54z4.c",
  "south" : DIR+"/rooms/x13y53z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
