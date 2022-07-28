inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 2 }));
  set_short( "Hallway - x27y0z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z2.c",
  "east" : DIR+"/rooms/x28y0z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
