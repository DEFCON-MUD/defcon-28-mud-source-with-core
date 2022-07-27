inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 3 }));
  set_short( "Passage - x21y4z3" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y5z3.c",
  "south" : DIR+"/rooms/x21y3z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
