inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 14, 6 }));
  set_short( "Passage - x26y14z6" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y14z6.c",
  "east" : DIR+"/rooms/x27y14z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
