inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 5 }));
  set_short( "Passage - x17y28z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z5.c",
  "east" : DIR+"/rooms/x18y28z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
