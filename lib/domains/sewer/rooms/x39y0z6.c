inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 0, 6 }));
  set_short( "Hallway - x39y0z6" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y0z6.c",
  "east" : DIR+"/rooms/x40y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
