inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 4 }));
  set_short( "Passage - x3y0z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z4.c",
  "east" : DIR+"/rooms/x4y0z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
