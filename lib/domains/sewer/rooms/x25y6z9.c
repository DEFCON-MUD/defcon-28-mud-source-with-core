inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 9 }));
  set_short( "Passage - x25y6z9" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y6z9.c",
  "south" : DIR+"/rooms/x25y5z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
