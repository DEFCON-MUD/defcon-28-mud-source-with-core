inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 2 }));
  set_short( "Passage - x33y44z2" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y44z2.c",
  "south" : DIR+"/rooms/x33y43z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
