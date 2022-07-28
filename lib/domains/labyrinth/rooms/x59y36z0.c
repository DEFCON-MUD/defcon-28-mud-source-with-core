inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 0 }));
  set_short( "Passage - x59y36z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y36z0.c",
  "north" : DIR+"/rooms/x59y37z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
