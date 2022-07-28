inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 0 }));
  set_short( "Corridor - x25y50z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y50z0.c",
  "south" : DIR+"/rooms/x25y49z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
