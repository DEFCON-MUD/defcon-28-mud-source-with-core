inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 56, 3 }));
  set_short( "Passage - x20y56z3" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y56z3.c",
  "east" : DIR+"/rooms/x21y56z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
