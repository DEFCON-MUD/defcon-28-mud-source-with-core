inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 32, 0 }));
  set_short( "Hallway - x8y32z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y32z0.c",
  "east" : DIR+"/rooms/x9y32z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
