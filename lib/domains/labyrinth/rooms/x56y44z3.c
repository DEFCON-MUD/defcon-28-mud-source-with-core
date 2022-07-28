inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 44, 3 }));
  set_short( "Passage - x56y44z3" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y44z3.c",
  "east" : DIR+"/rooms/x57y44z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
