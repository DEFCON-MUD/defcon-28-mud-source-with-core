inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 4 }));
  set_short( "Passage - x47y32z4" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y32z4.c",
  "east" : DIR+"/rooms/x48y32z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
