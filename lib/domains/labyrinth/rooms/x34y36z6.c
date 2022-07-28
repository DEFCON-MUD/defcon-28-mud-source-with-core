inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 36, 6 }));
  set_short( "Passage - x34y36z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y36z6.c",
  "east" : DIR+"/rooms/x35y36z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
