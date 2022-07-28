inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 5 }));
  set_short( "Corridor - x40y0z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z5.c",
  "east" : DIR+"/rooms/x41y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
