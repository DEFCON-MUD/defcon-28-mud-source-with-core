inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 8 }));
  set_short( "Passage - x27y8z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y8z8.c",
  "south" : DIR+"/rooms/x27y7z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
