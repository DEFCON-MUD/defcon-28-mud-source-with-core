inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 10, 3 }));
  set_short( "Corridor - x58y10z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y10z3.c",
  "east" : DIR+"/rooms/x59y10z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
