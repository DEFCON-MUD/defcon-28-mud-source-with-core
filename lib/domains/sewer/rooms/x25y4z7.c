inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 7 }));
  set_short( "Hallway - x25y4z7" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y4z7.c",
  "south" : DIR+"/rooms/x25y3z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
