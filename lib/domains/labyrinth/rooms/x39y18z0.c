inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 0 }));
  set_short( "Passage - x39y18z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y18z0.c",
  "east" : DIR+"/rooms/x40y18z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
