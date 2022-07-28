inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 21, 2 }));
  set_short( "Hallway - x9y21z2" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y22z2.c",
  "south" : DIR+"/rooms/x9y20z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
