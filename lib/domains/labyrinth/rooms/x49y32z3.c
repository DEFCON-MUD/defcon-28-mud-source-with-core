inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 3 }));
  set_short( "Passage - x49y32z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y32z3.c",
  "north" : DIR+"/rooms/x49y33z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
