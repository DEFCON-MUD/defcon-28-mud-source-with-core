inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 0 }));
  set_short( "Hallway - x41y21z0" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z0.c",
  "south" : DIR+"/rooms/x41y20z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
