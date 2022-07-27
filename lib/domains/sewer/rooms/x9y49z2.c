inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 49, 2 }));
  set_short( "Hallway - x9y49z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y50z2.c",
  "south" : DIR+"/rooms/x9y48z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
