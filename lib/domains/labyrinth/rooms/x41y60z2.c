inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 2 }));
  set_short( "Passage - x41y60z2" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y60z2.c",
  "east" : DIR+"/rooms/x42y60z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
