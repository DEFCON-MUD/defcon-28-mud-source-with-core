inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 0 }));
  set_short( "Passage - x19y32z0" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y32z0.c",
  "north" : DIR+"/rooms/x19y33z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
