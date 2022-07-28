inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 37, 5 }));
  set_short( "Passage - x29y37z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y38z5.c",
  "south" : DIR+"/rooms/x29y36z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
