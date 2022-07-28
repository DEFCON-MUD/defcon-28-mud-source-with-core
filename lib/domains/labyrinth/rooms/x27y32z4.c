inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 4 }));
  set_short( "Passage - x27y32z4" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y32z4.c",
  "south" : DIR+"/rooms/x27y31z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
