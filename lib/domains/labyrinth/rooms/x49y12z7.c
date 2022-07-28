inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 7 }));
  set_short( "Passage - x49y12z7" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y13z7.c",
  "south" : DIR+"/rooms/x49y11z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
