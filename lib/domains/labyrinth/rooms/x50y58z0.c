inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 0 }));
  set_short( "Corridor - x50y58z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z0.c",
  "east" : DIR+"/rooms/x51y58z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
