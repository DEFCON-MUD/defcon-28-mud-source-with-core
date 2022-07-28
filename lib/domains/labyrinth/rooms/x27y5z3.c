inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 3 }));
  set_short( "Passage - x27y5z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z3.c",
  "south" : DIR+"/rooms/x27y4z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
