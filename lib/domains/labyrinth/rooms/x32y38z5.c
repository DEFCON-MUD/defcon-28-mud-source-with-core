inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 38, 5 }));
  set_short( "Corridor - x32y38z5" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y38z5.c",
  "east" : DIR+"/rooms/x33y38z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
