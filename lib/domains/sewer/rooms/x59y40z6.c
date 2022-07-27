inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 6 }));
  set_short( "Corridor - x59y40z6" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y40z6.c",
  "south" : DIR+"/rooms/x59y39z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
