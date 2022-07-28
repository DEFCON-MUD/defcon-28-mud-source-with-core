inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 37, 2 }));
  set_short( "Passage - x3y37z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y38z2.c",
  "south" : DIR+"/rooms/x3y36z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
