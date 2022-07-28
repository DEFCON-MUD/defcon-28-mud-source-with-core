inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 6 }));
  set_short( "Passage - x25y36z6" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y36z6.c",
  "south" : DIR+"/rooms/x25y35z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
