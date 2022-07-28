inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 28, 0 }));
  set_short( "Hallway - x34y28z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y28z0.c",
  "east" : DIR+"/rooms/x35y28z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
