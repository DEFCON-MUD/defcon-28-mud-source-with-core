inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 11, 3 }));
  set_short( "Hallway - x51y11z3" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y12z3.c",
  "south" : DIR+"/rooms/x51y10z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
