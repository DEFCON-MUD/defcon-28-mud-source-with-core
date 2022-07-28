inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 3 }));
  set_short( "Passage - x29y48z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y48z3.c",
  "south" : DIR+"/rooms/x29y47z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
