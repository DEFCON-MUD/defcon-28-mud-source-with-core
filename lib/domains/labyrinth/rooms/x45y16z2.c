inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 2 }));
  set_short( "Hallway - x45y16z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y16z2.c",
  "north" : DIR+"/rooms/x45y17z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
