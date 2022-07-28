inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 5 }));
  set_short( "Passage - x27y12z5" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y12z5.c",
  "south" : DIR+"/rooms/x27y11z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
