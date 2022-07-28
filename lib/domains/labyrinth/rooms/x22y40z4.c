inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 40, 4 }));
  set_short( "Hallway - x22y40z4" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y40z4.c",
  "east" : DIR+"/rooms/x23y40z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
