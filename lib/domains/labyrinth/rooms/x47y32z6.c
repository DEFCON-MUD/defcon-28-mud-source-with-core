inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 6 }));
  set_short( "Passage - x47y32z6" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y32z6.c",
  "north" : DIR+"/rooms/x47y33z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
