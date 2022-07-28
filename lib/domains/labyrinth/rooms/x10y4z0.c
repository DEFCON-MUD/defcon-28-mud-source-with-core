inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 4, 0 }));
  set_short( "Passage - x10y4z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y4z0.c",
  "east" : DIR+"/rooms/x11y4z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
