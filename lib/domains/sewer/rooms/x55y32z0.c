inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 0 }));
  set_short( "Hallway - x55y32z0" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y33z0.c",
  "south" : DIR+"/rooms/x55y31z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
