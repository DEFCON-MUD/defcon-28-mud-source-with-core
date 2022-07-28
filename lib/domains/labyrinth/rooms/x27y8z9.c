inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 9 }));
  set_short( "Hallway - x27y8z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y8z9.c",
  "south" : DIR+"/rooms/x27y7z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
