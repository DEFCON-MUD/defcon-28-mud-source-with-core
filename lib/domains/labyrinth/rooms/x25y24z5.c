inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 5 }));
  set_short( "Passage - x25y24z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y25z5.c",
  "south" : DIR+"/rooms/x25y23z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
