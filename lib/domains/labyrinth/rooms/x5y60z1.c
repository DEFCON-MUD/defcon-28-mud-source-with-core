inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 1 }));
  set_short( "Passage - x5y60z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z1.c",
  "south" : DIR+"/rooms/x5y59z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
