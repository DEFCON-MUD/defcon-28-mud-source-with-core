inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 7 }));
  set_short( "Passage - x31y32z7" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z7.c",
  "south" : DIR+"/rooms/x31y31z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
