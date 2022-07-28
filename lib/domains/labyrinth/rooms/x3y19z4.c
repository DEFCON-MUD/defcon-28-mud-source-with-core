inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 19, 4 }));
  set_short( "Passage - x3y19z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y20z4.c",
  "south" : DIR+"/rooms/x3y18z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
