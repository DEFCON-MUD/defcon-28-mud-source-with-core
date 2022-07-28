inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 8 }));
  set_short( "Passage - x25y44z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y44z8.c",
  "south" : DIR+"/rooms/x25y43z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
