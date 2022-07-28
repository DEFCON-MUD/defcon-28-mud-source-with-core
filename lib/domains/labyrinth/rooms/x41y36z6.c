inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 6 }));
  set_short( "Passage - x41y36z6" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y37z6.c",
  "south" : DIR+"/rooms/x41y35z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
