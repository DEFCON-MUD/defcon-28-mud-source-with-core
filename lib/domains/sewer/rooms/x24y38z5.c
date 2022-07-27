inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 38, 5 }));
  set_short( "Hallway - x24y38z5" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y38z5.c",
  "east" : DIR+"/rooms/x25y38z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
