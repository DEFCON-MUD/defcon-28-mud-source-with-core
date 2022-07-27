inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 49, 2 }));
  set_short( "Corridor - x43y49z2" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y50z2.c",
  "south" : DIR+"/rooms/x43y48z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
