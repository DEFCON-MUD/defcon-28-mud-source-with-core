inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 3 }));
  set_short( "Corridor - x61y35z3" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z3.c",
  "south" : DIR+"/rooms/x61y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
