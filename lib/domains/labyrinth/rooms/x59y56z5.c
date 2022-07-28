inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 5 }));
  set_short( "Hallway - x59y56z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y56z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
