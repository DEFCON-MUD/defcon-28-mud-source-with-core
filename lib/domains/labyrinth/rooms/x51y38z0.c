inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 0 }));
  set_short( "Passage - x51y38z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y38z0.c",
  "south" : DIR+"/rooms/x51y37z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
