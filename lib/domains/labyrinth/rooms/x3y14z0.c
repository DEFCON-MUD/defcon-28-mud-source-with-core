inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 0 }));
  set_short( "Passage - x3y14z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y14z0.c",
  "north" : DIR+"/rooms/x3y15z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
