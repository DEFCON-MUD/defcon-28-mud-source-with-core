inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 39, 2 }));
  set_short( "Passage - x49y39z2" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y40z2.c",
  "south" : DIR+"/rooms/x49y38z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
