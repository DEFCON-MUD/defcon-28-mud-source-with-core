inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 2 }));
  set_short( "Corridor - x34y50z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z2.c",
  "east" : DIR+"/rooms/x35y50z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
