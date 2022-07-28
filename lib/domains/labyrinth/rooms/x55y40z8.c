inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 8 }));
  set_short( "Passage - x55y40z8" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y40z8.c",
  "south" : DIR+"/rooms/x55y39z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
