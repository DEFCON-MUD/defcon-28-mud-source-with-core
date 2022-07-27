inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 2 }));
  set_short( "Hallway - x1y11z2" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z2.c",
  "south" : DIR+"/rooms/x1y10z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
