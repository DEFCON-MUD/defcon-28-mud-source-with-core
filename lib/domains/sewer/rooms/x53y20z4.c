inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 4 }));
  set_short( "Passage - x53y20z4" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z4.c",
  "south" : DIR+"/rooms/x53y19z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
