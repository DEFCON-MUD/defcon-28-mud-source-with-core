inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 1 }));
  set_short( "Passage - x12y22z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z1.c",
  "east" : DIR+"/rooms/x13y22z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
