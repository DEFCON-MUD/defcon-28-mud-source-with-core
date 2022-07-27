inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 57, 6 }));
  set_short( "Passage - x11y57z6" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y58z6.c",
  "south" : DIR+"/rooms/x11y56z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
