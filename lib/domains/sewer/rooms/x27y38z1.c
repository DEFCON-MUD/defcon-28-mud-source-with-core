inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 1 }));
  set_short( "Passage - x27y38z1" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z1.c",
  "north" : DIR+"/rooms/x27y39z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
