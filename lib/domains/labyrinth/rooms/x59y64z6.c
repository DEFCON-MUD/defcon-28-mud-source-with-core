inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 6 }));
  set_short( "Passage - x59y64z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z6.c",
  "east" : DIR+"/rooms/x60y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
