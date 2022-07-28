inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 3, 1 }));
  set_short( "Passage - x7y3z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y4z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
