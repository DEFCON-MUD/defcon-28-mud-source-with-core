inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 58, 3 }));
  set_short( "Passage - x17y58z3" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y59z3.c",
  "south" : DIR+"/rooms/x17y57z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
