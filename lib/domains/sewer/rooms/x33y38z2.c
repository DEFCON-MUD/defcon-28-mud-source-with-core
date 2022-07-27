inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 2 }));
  set_short( "Passage - x33y38z2" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y38z2.c",
  "north" : DIR+"/rooms/x33y39z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
