inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 5 }));
  set_short( "Hallway - x25y50z5" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "south" : DIR+"/rooms/x25y49z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
