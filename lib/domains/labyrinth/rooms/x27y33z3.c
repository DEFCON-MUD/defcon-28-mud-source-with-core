inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 33, 3 }));
  set_short( "Hallway - x27y33z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y34z3.c",
  "south" : DIR+"/rooms/x27y32z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
