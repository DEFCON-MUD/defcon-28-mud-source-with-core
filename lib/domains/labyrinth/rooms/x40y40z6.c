inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 6 }));
  set_short( "Corridor - x40y40z6" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z6.c",
  "east" : DIR+"/rooms/x41y40z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
