inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 1 }));
  set_short( "Passage - x13y26z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y26z1.c",
  "south" : DIR+"/rooms/x13y25z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
