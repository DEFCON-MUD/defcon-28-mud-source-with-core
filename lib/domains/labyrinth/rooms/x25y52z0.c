inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 0 }));
  set_short( "Hallway - x25y52z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z0.c",
  "east" : DIR+"/rooms/x26y52z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
