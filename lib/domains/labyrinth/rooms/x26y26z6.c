inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 26, 6 }));
  set_short( "Passage - x26y26z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y26z6.c",
  "east" : DIR+"/rooms/x27y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
