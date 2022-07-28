inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 0 }));
  set_short( "Passage - x1y54z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y54z0.c",
  "south" : DIR+"/rooms/x1y53z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
