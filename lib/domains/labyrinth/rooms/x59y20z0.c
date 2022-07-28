inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 0 }));
  set_short( "Passage - x59y20z0" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y20z0.c",
  "south" : DIR+"/rooms/x59y19z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
