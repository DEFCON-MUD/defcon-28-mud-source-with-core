inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 8 }));
  set_short( "Hallway - x33y36z8" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z8.c",
  "south" : DIR+"/rooms/x33y35z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
