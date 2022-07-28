inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 60, 2 }));
  set_short( "Corridor - x53y60z2" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y60z2.c",
  "east" : DIR+"/rooms/x54y60z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
