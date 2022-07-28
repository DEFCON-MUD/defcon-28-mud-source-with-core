inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 1 }));
  set_short( "Hallway - x45y56z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y56z1.c",
  "north" : DIR+"/rooms/x45y57z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
