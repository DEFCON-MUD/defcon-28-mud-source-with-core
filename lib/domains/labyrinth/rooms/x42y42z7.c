inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 42, 7 }));
  set_short( "Passage - x42y42z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y42z7.c",
  "east" : DIR+"/rooms/x43y42z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
