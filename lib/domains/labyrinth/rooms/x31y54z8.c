inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 54, 8 }));
  set_short( "Hallway - x31y54z8" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y54z8.c",
  "north" : DIR+"/rooms/x31y55z8.c",
  "south" : DIR+"/rooms/x31y53z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
