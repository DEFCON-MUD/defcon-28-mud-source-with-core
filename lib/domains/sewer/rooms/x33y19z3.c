inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 19, 3 }));
  set_short( "Passage - x33y19z3" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y20z3.c",
  "south" : DIR+"/rooms/x33y18z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
