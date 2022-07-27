inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 2 }));
  set_short( "Passage - x39y31z2" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z2.c",
  "south" : DIR+"/rooms/x39y30z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
