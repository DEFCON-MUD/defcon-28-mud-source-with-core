inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 3 }));
  set_short( "Hallway - x27y58z3" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y59z3.c",
  "south" : DIR+"/rooms/x27y57z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
