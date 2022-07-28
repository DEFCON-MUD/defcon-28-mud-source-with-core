inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 4 }));
  set_short( "Passage - x19y20z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y20z4.c",
  "east" : DIR+"/rooms/x20y20z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
