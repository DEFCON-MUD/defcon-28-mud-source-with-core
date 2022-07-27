inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 4 }));
  set_short( "Corridor - x59y60z4" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y60z4.c",
  "south" : DIR+"/rooms/x59y59z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
