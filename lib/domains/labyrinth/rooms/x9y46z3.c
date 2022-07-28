inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 3 }));
  set_short( "Corridor - x9y46z3" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y46z3.c",
  "east" : DIR+"/rooms/x10y46z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
