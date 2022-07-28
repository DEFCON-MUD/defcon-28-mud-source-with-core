inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 0 }));
  set_short( "Passage - x15y54z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y54z0.c",
  "east" : DIR+"/rooms/x16y54z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
