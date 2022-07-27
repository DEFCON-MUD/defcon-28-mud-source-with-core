inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 3 }));
  set_short( "Hallway - x27y38z3" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z3.c",
  "east" : DIR+"/rooms/x28y38z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
