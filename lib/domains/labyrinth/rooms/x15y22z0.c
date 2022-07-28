inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 0 }));
  set_short( "Corridor - x15y22z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y22z0.c",
  "north" : DIR+"/rooms/x15y23z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
