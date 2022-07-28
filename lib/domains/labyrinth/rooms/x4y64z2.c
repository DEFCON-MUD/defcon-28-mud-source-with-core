inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 2 }));
  set_short( "Passage - x4y64z2" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z2.c",
  "east" : DIR+"/rooms/x5y64z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
