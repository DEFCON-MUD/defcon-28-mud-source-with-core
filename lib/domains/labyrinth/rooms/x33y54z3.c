inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 3 }));
  set_short( "Passage - x33y54z3" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y54z3.c",
  "south" : DIR+"/rooms/x33y53z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
