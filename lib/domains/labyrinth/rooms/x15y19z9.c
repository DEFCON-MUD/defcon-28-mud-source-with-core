inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 19, 9 }));
  set_short( "Hallway - x15y19z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y20z9.c",
  "south" : DIR+"/rooms/x15y18z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
