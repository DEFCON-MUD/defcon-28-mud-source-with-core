inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 2 }));
  set_short( "Hallway - x25y12z2" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y12z2.c",
  "north" : DIR+"/rooms/x25y13z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
