inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 7 }));
  set_short( "Passage - x43y56z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y56z7.c",
  "east" : DIR+"/rooms/x44y56z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
