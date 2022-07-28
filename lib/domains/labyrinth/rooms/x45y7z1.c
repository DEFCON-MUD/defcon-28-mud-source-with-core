inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 7, 1 }));
  set_short( "Passage - x45y7z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y8z1.c",
  "south" : DIR+"/rooms/x45y6z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
