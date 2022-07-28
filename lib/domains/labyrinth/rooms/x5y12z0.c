inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 0 }));
  set_short( "Passage - x5y12z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y12z0.c",
  "south" : DIR+"/rooms/x5y11z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
