inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 1 }));
  set_short( "Corridor - x26y56z1" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z1.c",
  "east" : DIR+"/rooms/x27y56z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
