inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 39, 4 }));
  set_short( "Passage - x39y39z4" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y40z4.c",
  "south" : DIR+"/rooms/x39y38z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
