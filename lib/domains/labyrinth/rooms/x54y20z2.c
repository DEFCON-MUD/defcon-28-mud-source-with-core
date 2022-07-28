inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 20, 2 }));
  set_short( "Passage - x54y20z2" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y20z2.c",
  "east" : DIR+"/rooms/x55y20z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
