inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 9 }));
  set_short( "Hallway - x3y16z9" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y16z9.c",
  "east" : DIR+"/rooms/x4y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
