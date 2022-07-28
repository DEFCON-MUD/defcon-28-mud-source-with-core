inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 19, 5 }));
  set_short( "Corridor - x33y19z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y20z5.c",
  "south" : DIR+"/rooms/x33y18z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
