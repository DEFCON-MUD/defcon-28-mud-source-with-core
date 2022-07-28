inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 64, 7 }));
  set_short( "Passage - x56y64z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y64z7.c",
  "east" : DIR+"/rooms/x57y64z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
