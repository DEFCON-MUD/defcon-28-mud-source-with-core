inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 4 }));
  set_short( "Hallway - x56y0z4" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z4.c",
  "east" : DIR+"/rooms/x57y0z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
