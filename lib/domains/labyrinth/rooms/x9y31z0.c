inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 31, 0 }));
  set_short( "Passage - x9y31z0" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y32z0.c",
  "south" : DIR+"/rooms/x9y30z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
