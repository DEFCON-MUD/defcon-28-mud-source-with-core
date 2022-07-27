inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 4 }));
  set_short( "Hallway - x41y21z4" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z4.c",
  "south" : DIR+"/rooms/x41y20z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
