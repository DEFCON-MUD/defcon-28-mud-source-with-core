inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 6 }));
  set_short( "Passage - x33y58z6" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y59z6.c",
  "south" : DIR+"/rooms/x33y57z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
