inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 0, 7 }));
  set_short( "Hallway - x39y0z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y0z7.c",
  "east" : DIR+"/rooms/x40y0z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
