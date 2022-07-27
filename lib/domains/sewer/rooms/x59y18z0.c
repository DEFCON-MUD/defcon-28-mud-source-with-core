inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 0 }));
  set_short( "Hallway - x59y18z0" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y19z0.c",
  "south" : DIR+"/rooms/x59y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
