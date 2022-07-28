inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 11, 3 }));
  set_short( "Passage - x25y11z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y12z3.c",
  "south" : DIR+"/rooms/x25y10z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
