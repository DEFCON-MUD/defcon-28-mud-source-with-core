inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 7 }));
  set_short( "Passage - x23y28z7" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y28z7.c",
  "north" : DIR+"/rooms/x23y29z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
