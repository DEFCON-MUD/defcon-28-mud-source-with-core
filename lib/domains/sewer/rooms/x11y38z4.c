inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 4 }));
  set_short( "Passage - x11y38z4" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z4.c",
  "north" : DIR+"/rooms/x11y39z4.c",
  "south" : DIR+"/rooms/x11y37z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
