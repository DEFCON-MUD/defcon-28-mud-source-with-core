inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 3 }));
  set_short( "Hallway - x11y19z3" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z3.c",
  "south" : DIR+"/rooms/x11y18z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
