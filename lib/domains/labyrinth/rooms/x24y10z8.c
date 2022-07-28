inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 10, 8 }));
  set_short( "Passage - x24y10z8" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y10z8.c",
  "east" : DIR+"/rooms/x25y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
