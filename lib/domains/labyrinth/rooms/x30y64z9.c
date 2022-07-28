inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 9 }));
  set_short( "Corridor - x30y64z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z9.c",
  "east" : DIR+"/rooms/x31y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
