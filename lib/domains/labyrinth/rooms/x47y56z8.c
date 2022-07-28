inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 8 }));
  set_short( "Corridor - x47y56z8" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y56z8.c",
  "north" : DIR+"/rooms/x47y57z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
