inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 0, 2 }));
  set_short( "Hallway - x47y0z2" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y0z2.c",
  "east" : DIR+"/rooms/x48y0z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
