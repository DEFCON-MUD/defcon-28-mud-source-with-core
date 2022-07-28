inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 1 }));
  set_short( "Hallway - x53y38z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y38z1.c",
  "north" : DIR+"/rooms/x53y39z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
