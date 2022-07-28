inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 37, 0 }));
  set_short( "Hallway - x9y37z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y38z0.c",
  "south" : DIR+"/rooms/x9y36z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
