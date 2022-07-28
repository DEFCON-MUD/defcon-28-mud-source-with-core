inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 9 }));
  set_short( "Passage - x19y30z9" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z9.c",
  "south" : DIR+"/rooms/x19y29z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
