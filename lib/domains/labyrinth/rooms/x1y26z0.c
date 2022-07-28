inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 0 }));
  set_short( "Passage - x1y26z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y26z0.c",
  "south" : DIR+"/rooms/x1y25z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
