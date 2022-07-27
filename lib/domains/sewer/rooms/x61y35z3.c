inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 3 }));
  set_short( "Hallway - x61y35z3" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z3.c",
  "south" : DIR+"/rooms/x61y34z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
