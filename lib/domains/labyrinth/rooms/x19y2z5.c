inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 5 }));
  set_short( "Passage - x19y2z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z5.c",
  "east" : DIR+"/rooms/x20y2z5.c",
  "north" : DIR+"/rooms/x19y3z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
