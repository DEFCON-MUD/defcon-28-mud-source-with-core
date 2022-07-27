inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 17, 3 }));
  set_short( "Hallway - x31y17z3" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y18z3.c",
  "south" : DIR+"/rooms/x31y16z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
