inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 9 }));
  set_short( "Passage - x17y56z9" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y56z9.c",
  "north" : DIR+"/rooms/x17y57z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
