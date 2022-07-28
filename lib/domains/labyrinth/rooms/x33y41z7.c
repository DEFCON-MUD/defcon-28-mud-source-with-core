inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 41, 7 }));
  set_short( "Hallway - x33y41z7" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y42z7.c",
  "south" : DIR+"/rooms/x33y40z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
