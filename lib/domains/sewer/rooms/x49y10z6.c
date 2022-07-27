inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 6 }));
  set_short( "Corridor - x49y10z6" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y10z6.c",
  "east" : DIR+"/rooms/x50y10z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
