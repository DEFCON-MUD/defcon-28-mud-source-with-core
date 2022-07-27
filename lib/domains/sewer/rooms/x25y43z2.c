inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 43, 2 }));
  set_short( "Passage - x25y43z2" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y44z2.c",
  "south" : DIR+"/rooms/x25y42z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
