inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 2 }));
  set_short( "Hallway - x57y48z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y48z2.c",
  "south" : DIR+"/rooms/x57y47z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
