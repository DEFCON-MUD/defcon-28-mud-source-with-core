inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 43, 8 }));
  set_short( "Passage - x25y43z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y44z8.c",
  "south" : DIR+"/rooms/x25y42z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
