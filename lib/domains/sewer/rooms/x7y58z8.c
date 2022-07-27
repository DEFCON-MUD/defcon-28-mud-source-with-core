inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 8 }));
  set_short( "Corridor - x7y58z8" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y58z8.c",
  "south" : DIR+"/rooms/x7y57z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
