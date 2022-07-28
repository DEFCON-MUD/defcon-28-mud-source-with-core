inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 7 }));
  set_short( "Hallway - x45y38z7" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y38z7.c",
  "north" : DIR+"/rooms/x45y39z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
