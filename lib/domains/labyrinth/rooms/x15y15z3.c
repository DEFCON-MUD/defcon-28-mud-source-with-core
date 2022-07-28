inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 15, 3 }));
  set_short( "Passage - x15y15z3" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y16z3.c",
  "south" : DIR+"/rooms/x15y14z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
