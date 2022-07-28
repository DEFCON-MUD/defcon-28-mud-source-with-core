inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 2 }));
  set_short( "Hallway - x21y2z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z2.c",
  "east" : DIR+"/rooms/x22y2z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
