inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 3 }));
  set_short( "Hallway - x7y19z3" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z3.c",
  "south" : DIR+"/rooms/x7y18z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
