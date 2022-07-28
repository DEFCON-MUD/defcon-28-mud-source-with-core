inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 34, 0 }));
  set_short( "Passage - x58y34z0" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y34z0.c",
  "east" : DIR+"/rooms/x59y34z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
