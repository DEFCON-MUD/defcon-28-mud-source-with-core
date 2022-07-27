inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 0 }));
  set_short( "Passage - x15y2z0" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y2z0.c",
  "north" : DIR+"/rooms/x15y3z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
