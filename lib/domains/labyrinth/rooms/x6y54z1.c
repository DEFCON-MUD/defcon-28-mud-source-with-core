inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 54, 1 }));
  set_short( "Passage - x6y54z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y54z1.c",
  "east" : DIR+"/rooms/x7y54z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
