inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 58, 0 }));
  set_short( "Passage - x3y58z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y58z0.c",
  "east" : DIR+"/rooms/x4y58z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
