inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 32, 2 }));
  set_short( "Hallway - x24y32z2" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y32z2.c",
  "east" : DIR+"/rooms/x25y32z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
