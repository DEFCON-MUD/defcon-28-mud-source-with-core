inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 2 }));
  set_short( "Corridor - x5y62z2" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y62z2.c",
  "south" : DIR+"/rooms/x5y61z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
