inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 5 }));
  set_short( "Passage - x11y26z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z5.c",
  "east" : DIR+"/rooms/x12y26z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
