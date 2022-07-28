inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 6 }));
  set_short( "Hallway - x47y64z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z6.c",
  "east" : DIR+"/rooms/x48y64z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
