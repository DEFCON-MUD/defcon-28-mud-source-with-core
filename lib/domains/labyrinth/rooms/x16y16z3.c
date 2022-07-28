inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 16, 3 }));
  set_short( "Passage - x16y16z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y16z3.c",
  "east" : DIR+"/rooms/x17y16z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
