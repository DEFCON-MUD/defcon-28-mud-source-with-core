inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 4 }));
  set_short( "Passage - x41y56z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z4.c",
  "north" : DIR+"/rooms/x41y57z4.c",
  "south" : DIR+"/rooms/x41y55z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
