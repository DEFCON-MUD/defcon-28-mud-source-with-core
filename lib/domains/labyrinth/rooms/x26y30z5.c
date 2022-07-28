inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 30, 5 }));
  set_short( "Passage - x26y30z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y30z5.c",
  "east" : DIR+"/rooms/x27y30z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
