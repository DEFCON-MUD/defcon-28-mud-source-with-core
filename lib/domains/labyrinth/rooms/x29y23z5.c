inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 5 }));
  set_short( "Hallway - x29y23z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z5.c",
  "south" : DIR+"/rooms/x29y22z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
