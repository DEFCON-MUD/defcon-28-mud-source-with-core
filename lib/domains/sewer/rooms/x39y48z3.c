inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 3 }));
  set_short( "Passage - x39y48z3" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y49z3.c",
  "south" : DIR+"/rooms/x39y47z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
