inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 0 }));
  set_short( "Passage - x27y36z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y36z0.c",
  "south" : DIR+"/rooms/x27y35z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
