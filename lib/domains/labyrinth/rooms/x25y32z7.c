inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 7 }));
  set_short( "Corridor - x25y32z7" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y32z7.c",
  "east" : DIR+"/rooms/x26y32z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
