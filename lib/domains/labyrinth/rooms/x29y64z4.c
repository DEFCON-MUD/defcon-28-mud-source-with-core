inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 4 }));
  set_short( "Hallway - x29y64z4" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z4.c",
  "east" : DIR+"/rooms/x30y64z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
