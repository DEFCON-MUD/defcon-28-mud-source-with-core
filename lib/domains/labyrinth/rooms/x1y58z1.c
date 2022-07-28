inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 1 }));
  set_short( "Passage - x1y58z1" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z1.c",
  "south" : DIR+"/rooms/x1y57z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
