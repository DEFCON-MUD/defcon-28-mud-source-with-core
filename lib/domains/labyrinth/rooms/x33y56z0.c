inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 56, 0 }));
  set_short( "Passage - x33y56z0" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y56z0.c",
  "east" : DIR+"/rooms/x34y56z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
