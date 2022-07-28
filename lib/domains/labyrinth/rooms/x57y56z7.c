inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 7 }));
  set_short( "Corridor - x57y56z7" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y57z7.c",
  "south" : DIR+"/rooms/x57y55z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
