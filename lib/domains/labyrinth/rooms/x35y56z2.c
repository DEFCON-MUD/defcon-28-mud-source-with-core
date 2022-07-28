inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 2 }));
  set_short( "Hallway - x35y56z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y56z2.c",
  "north" : DIR+"/rooms/x35y57z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
