inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 7 }));
  set_short( "Passage - x53y62z7" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y62z7.c",
  "south" : DIR+"/rooms/x53y61z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
