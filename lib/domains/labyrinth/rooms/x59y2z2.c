inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 2, 2 }));
  set_short( "Passage - x59y2z2" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y2z2.c",
  "north" : DIR+"/rooms/x59y3z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
