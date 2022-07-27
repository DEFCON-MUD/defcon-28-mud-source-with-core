inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 0 }));
  set_short( "Passage - x41y62z0" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y62z0.c",
  "south" : DIR+"/rooms/x41y61z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
