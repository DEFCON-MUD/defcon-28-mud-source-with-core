inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 60, 1 }));
  set_short( "Passage - x10y60z1" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y60z1.c",
  "east" : DIR+"/rooms/x11y60z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
