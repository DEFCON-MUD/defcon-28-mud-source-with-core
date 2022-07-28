inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 38, 0 }));
  set_short( "Passage - x56y38z0" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y38z0.c",
  "east" : DIR+"/rooms/x57y38z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
