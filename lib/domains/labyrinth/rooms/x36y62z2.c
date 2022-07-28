inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 62, 2 }));
  set_short( "Passage - x36y62z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y62z2.c",
  "east" : DIR+"/rooms/x37y62z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
