inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 1 }));
  set_short( "Corridor - x53y46z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z1.c",
  "east" : DIR+"/rooms/x54y46z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
