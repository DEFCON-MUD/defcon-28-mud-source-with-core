inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 1 }));
  set_short( "Passage - x45y4z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y4z1.c",
  "east" : DIR+"/rooms/x46y4z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
