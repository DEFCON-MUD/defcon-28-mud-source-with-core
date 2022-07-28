inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 0, 4 }));
  set_short( "Hallway - x20y0z4" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y0z4.c",
  "east" : DIR+"/rooms/x21y0z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
