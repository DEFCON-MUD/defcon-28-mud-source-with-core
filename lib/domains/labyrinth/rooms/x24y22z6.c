inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 6 }));
  set_short( "Passage - x24y22z6" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z6.c",
  "east" : DIR+"/rooms/x25y22z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
