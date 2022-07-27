inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 17, 0 }));
  set_short( "Hallway - x59y17z0" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y18z0.c",
  "south" : DIR+"/rooms/x59y16z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
