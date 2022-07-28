inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 6 }));
  set_short( "Passage - x13y64z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z6.c",
  "east" : DIR+"/rooms/x14y64z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
