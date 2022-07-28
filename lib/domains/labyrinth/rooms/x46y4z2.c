inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 4, 2 }));
  set_short( "Hallway - x46y4z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y4z2.c",
  "east" : DIR+"/rooms/x47y4z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
