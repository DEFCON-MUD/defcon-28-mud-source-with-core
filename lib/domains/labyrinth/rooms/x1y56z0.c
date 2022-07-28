inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 0 }));
  set_short( "Corridor - x1y56z0" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y56z0.c",
  "north" : DIR+"/rooms/x1y57z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
