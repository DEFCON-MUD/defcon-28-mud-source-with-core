inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 0, 8 }));
  set_short( "Passage - x47y0z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y0z8.c",
  "east" : DIR+"/rooms/x48y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
