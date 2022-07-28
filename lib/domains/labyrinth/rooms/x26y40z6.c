inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 40, 6 }));
  set_short( "Corridor - x26y40z6" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y40z6.c",
  "east" : DIR+"/rooms/x27y40z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
