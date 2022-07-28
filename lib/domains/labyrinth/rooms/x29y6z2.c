inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 2 }));
  set_short( "Hallway - x29y6z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y6z2.c",
  "south" : DIR+"/rooms/x29y5z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
