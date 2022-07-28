inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 0 }));
  set_short( "Hallway - x25y48z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y49z0.c",
  "south" : DIR+"/rooms/x25y47z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
