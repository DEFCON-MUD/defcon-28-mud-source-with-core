inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 34, 0 }));
  set_short( "Hallway - x34y34z0" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y34z0.c",
  "east" : DIR+"/rooms/x35y34z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
