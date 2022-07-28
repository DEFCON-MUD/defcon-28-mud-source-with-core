inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 57, 8 }));
  set_short( "Hallway - x7y57z8" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y58z8.c",
  "south" : DIR+"/rooms/x7y56z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
