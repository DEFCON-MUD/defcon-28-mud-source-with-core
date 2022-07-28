inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 0 }));
  set_short( "Passage - x7y8z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z0.c",
  "south" : DIR+"/rooms/x7y7z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
