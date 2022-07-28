inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 36, 1 }));
  set_short( "Passage - x28y36z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y36z1.c",
  "east" : DIR+"/rooms/x29y36z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
