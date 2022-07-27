inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 8 }));
  set_short( "Corridor - x59y22z8" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y22z8.c",
  "south" : DIR+"/rooms/x59y21z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
