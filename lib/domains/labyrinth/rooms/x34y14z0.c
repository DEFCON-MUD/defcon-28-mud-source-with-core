inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 14, 0 }));
  set_short( "Corridor - x34y14z0" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y14z0.c",
  "east" : DIR+"/rooms/x35y14z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
