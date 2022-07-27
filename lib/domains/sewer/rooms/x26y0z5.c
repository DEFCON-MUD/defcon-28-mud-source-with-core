inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 0, 5 }));
  set_short( "Passage - x26y0z5" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y0z5.c",
  "east" : DIR+"/rooms/x27y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
