inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 31, 7 }));
  set_short( "Passage - x47y31z7" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y32z7.c",
  "south" : DIR+"/rooms/x47y30z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
