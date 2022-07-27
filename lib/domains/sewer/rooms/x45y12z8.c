inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 8 }));
  set_short( "Passage - x45y12z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y12z8.c",
  "south" : DIR+"/rooms/x45y11z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
