inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 2 }));
  set_short( "Passage - x29y24z2" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y24z2.c",
  "south" : DIR+"/rooms/x29y23z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
