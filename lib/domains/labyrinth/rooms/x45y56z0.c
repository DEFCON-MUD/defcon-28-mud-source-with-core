inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 0 }));
  set_short( "Passage - x45y56z0" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y56z0.c",
  "north" : DIR+"/rooms/x45y57z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
