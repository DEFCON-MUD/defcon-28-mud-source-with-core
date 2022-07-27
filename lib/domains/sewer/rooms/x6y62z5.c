inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 5 }));
  set_short( "Passage - x6y62z5" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z5.c",
  "east" : DIR+"/rooms/x7y62z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
