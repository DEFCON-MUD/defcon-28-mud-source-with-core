inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 8 }));
  set_short( "Passage - x23y16z8" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z8.c",
  "north" : DIR+"/rooms/x23y17z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
