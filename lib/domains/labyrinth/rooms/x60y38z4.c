inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 38, 4 }));
  set_short( "Passage - x60y38z4" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y38z4.c",
  "east" : DIR+"/rooms/x61y38z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
