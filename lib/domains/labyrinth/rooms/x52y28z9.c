inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 28, 9 }));
  set_short( "Hallway - x52y28z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y28z9.c",
  "east" : DIR+"/rooms/x53y28z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
