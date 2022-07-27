inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 5 }));
  set_short( "Hallway - x9y54z5" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
