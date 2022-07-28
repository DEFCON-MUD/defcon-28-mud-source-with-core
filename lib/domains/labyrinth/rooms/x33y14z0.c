inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 0 }));
  set_short( "Hallway - x33y14z0" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y14z0.c",
  "east" : DIR+"/rooms/x34y14z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
