inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 62, 0 }));
  set_short( "Passage - x4y62z0" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y62z0.c",
  "east" : DIR+"/rooms/x5y62z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
