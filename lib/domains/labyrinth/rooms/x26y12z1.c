inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 12, 1 }));
  set_short( "Hallway - x26y12z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y12z1.c",
  "east" : DIR+"/rooms/x27y12z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
