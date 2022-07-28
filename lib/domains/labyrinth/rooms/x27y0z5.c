inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 5 }));
  set_short( "Hallway - x27y0z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z5.c",
  "east" : DIR+"/rooms/x28y0z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
