inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 4, 9 }));
  set_short( "Hallway - x34y4z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y4z9.c",
  "east" : DIR+"/rooms/x35y4z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
