inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 5 }));
  set_short( "Passage - x11y56z5" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z5.c",
  "north" : DIR+"/rooms/x11y57z5.c",
  "south" : DIR+"/rooms/x11y55z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
