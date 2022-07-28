inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 5, 7 }));
  set_short( "Passage - x59y5z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y6z7.c",
  "south" : DIR+"/rooms/x59y4z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
