inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 3 }));
  set_short( "Corridor - x25y32z3" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y32z3.c",
  "north" : DIR+"/rooms/x25y33z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
