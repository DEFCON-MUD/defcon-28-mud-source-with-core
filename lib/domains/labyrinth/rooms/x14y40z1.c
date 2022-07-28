inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 40, 1 }));
  set_short( "Corridor - x14y40z1" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y40z1.c",
  "east" : DIR+"/rooms/x15y40z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
