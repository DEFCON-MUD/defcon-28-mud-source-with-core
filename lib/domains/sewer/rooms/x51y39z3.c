inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 3 }));
  set_short( "Hallway - x51y39z3" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z3.c",
  "south" : DIR+"/rooms/x51y38z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
