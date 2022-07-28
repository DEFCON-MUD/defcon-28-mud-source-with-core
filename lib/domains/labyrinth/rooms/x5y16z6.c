inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 6 }));
  set_short( "Passage - x5y16z6" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y16z6.c",
  "south" : DIR+"/rooms/x5y15z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
