inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 8, 2 }));
  set_short( "Passage - x40y8z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y8z2.c",
  "east" : DIR+"/rooms/x41y8z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
