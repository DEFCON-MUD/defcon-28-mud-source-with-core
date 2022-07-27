inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 4 }));
  set_short( "Passage - x17y32z4" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z4.c",
  "north" : DIR+"/rooms/x17y33z4.c",
  "south" : DIR+"/rooms/x17y31z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
