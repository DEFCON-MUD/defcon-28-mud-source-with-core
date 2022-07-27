inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 61, 2 }));
  set_short( "Hallway - x37y61z2" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y62z2.c",
  "south" : DIR+"/rooms/x37y60z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
