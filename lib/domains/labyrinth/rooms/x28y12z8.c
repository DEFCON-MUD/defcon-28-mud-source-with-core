inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 12, 8 }));
  set_short( "Hallway - x28y12z8" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y12z8.c",
  "east" : DIR+"/rooms/x29y12z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
