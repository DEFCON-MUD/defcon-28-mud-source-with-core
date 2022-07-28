inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 7 }));
  set_short( "Hallway - x16y62z7" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z7.c",
  "east" : DIR+"/rooms/x17y62z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
