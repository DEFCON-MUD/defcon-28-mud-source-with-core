inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 38, 2 }));
  set_short( "Passage - x24y38z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y38z2.c",
  "east" : DIR+"/rooms/x25y38z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
