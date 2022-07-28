inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 0, 2 }));
  set_short( "Passage - x20y0z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y0z2.c",
  "east" : DIR+"/rooms/x21y0z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
