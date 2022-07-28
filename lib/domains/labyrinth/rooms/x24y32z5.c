inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 32, 5 }));
  set_short( "Passage - x24y32z5" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y32z5.c",
  "east" : DIR+"/rooms/x25y32z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
