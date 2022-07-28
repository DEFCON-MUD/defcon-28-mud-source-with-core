inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 8 }));
  set_short( "Passage - x40y64z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z8.c",
  "east" : DIR+"/rooms/x41y64z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
