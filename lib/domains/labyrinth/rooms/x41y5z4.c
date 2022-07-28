inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 5, 4 }));
  set_short( "Hallway - x41y5z4" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y6z4.c",
  "south" : DIR+"/rooms/x41y4z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
