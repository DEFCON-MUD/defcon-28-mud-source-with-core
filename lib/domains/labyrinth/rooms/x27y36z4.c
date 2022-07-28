inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 4 }));
  set_short( "Passage - x27y36z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y36z4.c",
  "east" : DIR+"/rooms/x28y36z4.c",
  "south" : DIR+"/rooms/x27y35z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
