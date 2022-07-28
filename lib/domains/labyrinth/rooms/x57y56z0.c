inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 0 }));
  set_short( "Hallway - x57y56z0" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y56z0.c",
  "east" : DIR+"/rooms/x58y56z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
