inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 5 }));
  set_short( "Passage - x16y62z5" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z5.c",
  "east" : DIR+"/rooms/x17y62z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
