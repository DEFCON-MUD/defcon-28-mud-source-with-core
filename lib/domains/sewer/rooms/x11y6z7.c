inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 7 }));
  set_short( "Hallway - x11y6z7" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y6z7.c",
  "south" : DIR+"/rooms/x11y5z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
