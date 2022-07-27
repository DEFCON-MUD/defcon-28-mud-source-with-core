inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 1 }));
  set_short( "Corridor - x29y6z1" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y7z1.c",
  "south" : DIR+"/rooms/x29y5z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
