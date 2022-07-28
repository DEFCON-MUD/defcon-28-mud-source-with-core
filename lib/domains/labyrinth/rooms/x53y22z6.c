inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 6 }));
  set_short( "Passage - x53y22z6" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z6.c",
  "south" : DIR+"/rooms/x53y21z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
