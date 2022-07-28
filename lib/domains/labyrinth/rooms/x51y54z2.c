inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 54, 2 }));
  set_short( "Corridor - x51y54z2" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y54z2.c",
  "south" : DIR+"/rooms/x51y53z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
