inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 0 }));
  set_short( "Passage - x41y6z0" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z0.c",
  "north" : DIR+"/rooms/x41y7z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
