inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 0 }));
  set_short( "Passage - x2y58z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z0.c",
  "east" : DIR+"/rooms/x3y58z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
