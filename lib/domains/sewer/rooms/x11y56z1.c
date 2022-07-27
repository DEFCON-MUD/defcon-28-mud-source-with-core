inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 1 }));
  set_short( "Hallway - x11y56z1" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y56z1.c",
  "north" : DIR+"/rooms/x11y57z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
