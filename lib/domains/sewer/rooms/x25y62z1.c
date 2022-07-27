inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 1 }));
  set_short( "Hallway - x25y62z1" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y62z1.c",
  "south" : DIR+"/rooms/x25y61z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
