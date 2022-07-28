inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 8, 2 }));
  set_short( "Passage - x61y8z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y9z2.c",
  "south" : DIR+"/rooms/x61y7z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
