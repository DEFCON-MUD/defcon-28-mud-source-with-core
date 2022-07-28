inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 33, 3 }));
  set_short( "Corridor - x49y33z3" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y34z3.c",
  "south" : DIR+"/rooms/x49y32z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
