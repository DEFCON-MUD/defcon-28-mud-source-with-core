inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 6 }));
  set_short( "Passage - x38y52z6" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z6.c",
  "east" : DIR+"/rooms/x39y52z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
